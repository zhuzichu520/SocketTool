#ifndef SCOKETCONTROLLER_H
#define SCOKETCONTROLLER_H

#include <QObject>
#include <QDebug>
#include <QMetaEnum>
#include <message.pb.h>
#include <ByteBuf.h>
#include <QtWebSockets>
#include <online.pb.h>
#include <google/protobuf/util/json_util.h>

#define MAX_SIZE 128 * 1024

class ScoketController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int state READ state NOTIFY stateChanged)
public:
    explicit ScoketController(QObject *parent = nullptr);
    ~ScoketController();

    [[nodiscard]] int state() const{
        return m_state;
    }

    Q_SIGNAL void stateChanged();

    Q_INVOKABLE void connectSocket(const QString &hostname,const QString &accid, const QString &token);

    Q_INVOKABLE void closeScoket();

    Q_INVOKABLE void sendMessage(const QString &from,const QString &to,const QString &message);

    Q_SIGNAL void textMessageReceived(const QString &text);

    Q_SIGNAL void errorMessage(const QString& error);

    Q_SIGNAL void lineStatusChanged(const QString& json);

private:
    void updateState(int state){
        m_state = state;
        Q_EMIT stateChanged();
    }

private:
    QWebSocket *socket;
    int m_state = -1;
};

#endif // SCOKETCONTROLLER_H
