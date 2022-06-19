#ifndef APIGETUSERLIST_H
#define APIGETUSERLIST_H

#include "Api.h"
#include <QObject>
#include "HttpClient.h"

class ApiGetUserList : public Api
{
    Q_OBJECT
public:

    explicit ApiGetUserList(QObject *parent = nullptr);

    ~ApiGetUserList() override = default;

    QString getPath() override {
        return  "/api/system/user/getAllUser";
    }

    Q_INVOKABLE void execute() override{
        HttpClient(getBaseUrl()+getPath())
                .success([this](const QString &response) {
                    handleResponse(response);
                }).post();
    }

};
#endif // APIGETUSERLIST_H
