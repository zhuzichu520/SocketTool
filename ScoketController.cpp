#include "ScoketController.h"

ScoketController::ScoketController(QObject *parent): QObject{parent}
{
    socket =new QWebSocket();

    connect(socket,&QWebSocket::connected,[this]{
        qDebug()<<"connected";
    });

    connect(socket,&QWebSocket::disconnected,[this]{
        qDebug()<<"disconnected";
    });

    connect(socket,&QWebSocket::stateChanged,this,[this](QAbstractSocket::SocketState state){
        qDebug()<<"stateChanged:"<<state;
        switch (state) {
        case QAbstractSocket::UnconnectedState:
            updateState(0);
            break;
        case QAbstractSocket::HostLookupState:
            updateState(1);
            break;
        case QAbstractSocket::ConnectingState:
            updateState(2);
            break;
        case QAbstractSocket::ConnectedState:
            updateState(3);
            break;
        case QAbstractSocket::BoundState:
            updateState(4);
            break;
        case QAbstractSocket::ClosingState:
            updateState(5);
            break;
        case QAbstractSocket::ListeningState:
            updateState(6);
            break;
        default:
            updateState(-1);
            break;
        }
    });

    connect(socket,&QWebSocket::binaryMessageReceived,this,[this](const QByteArray &frame){
        QString buffer;
        for(int i = 0;i<frame.size();i++)
        {
            QString s;
            buffer.append(s.asprintf("0x%02x ",(unsigned char)frame.at(i)));
        }
        qDebug()<<"原始数据"<<buffer;

        if((unsigned char)frame[0] == 0x1){
            QByteArray data = frame.sliced(1,frame.size()-1);
            im::proto::Message message;
            message.ParseFromString(data.toStdString());
            Q_EMIT textMessageReceived(QString::fromStdString(message.body()));
        }else if((unsigned char)frame[0] == 0x2){
            QByteArray data = frame.sliced(1,frame.size()-1);
            im::proto::Online online;
            online.ParseFromString(data.toStdString());
            std::string json;
            google::protobuf::util::MessageToJsonString(online,&json);
            Q_EMIT lineStatusChanged(QString::fromStdString(json));
        }
    });

    connect(socket,&QWebSocket::bytesWritten,this,[this](qint64 bytes){
        qDebug()<<"bytesWritten"<<bytes;
    });


    connect(socket, QOverload<QAbstractSocket::SocketError>::of(&QWebSocket::error),this,
            [=](QAbstractSocket::SocketError error){
        qDebug()<<"binaryFrameReceived";
        Q_EMIT errorMessage(QMetaEnum::fromType<QAbstractSocket::SocketError>().valueToKey(error));
    });


}

void ScoketController::closeScoket(){
    socket->close();
}

void ScoketController::sendMessage(const QString &body){
    im::proto::Message message;
    message.set_body(body.toStdString());
    socket->sendBinaryMessage(QByteArray::fromStdString(message.SerializeAsString()));
}

ScoketController::~ScoketController()
{
    socket->close();
    delete socket;
}

void ScoketController::connectSocket(const QString &hostname,const QString &accid,const QString &token){
    qDebug()<<"开始连接socket";
    socket->open(hostname+"?accid="+accid+"&token="+token);
}
