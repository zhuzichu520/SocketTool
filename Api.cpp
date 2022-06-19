#include "Api.h"

Api::Api(QObject *parent) {

}

Api::~Api() {

}

void Api::handleResponse(const QString &response) {
    QJsonParseError jsonError{};
    QJsonDocument  jsonDoc = QJsonDocument::fromJson(response.toUtf8(),&jsonError);
    if(jsonError.error != QJsonParseError::NoError){
        Q_EMIT error(-1,"JSON格式错误");
        Q_EMIT finish();
        return;
    }
    const QJsonObject &obj = jsonDoc.object();
    int errorCode = obj.value("code").toInt();
    const QString &errorMsg = obj.value("message").toString();
    if(errorCode != 200){
        Q_EMIT error(errorCode,errorMsg);
        Q_EMIT finish();
        return;
    }
    Q_EMIT success(obj.value("data"));
    Q_EMIT finish();
}
