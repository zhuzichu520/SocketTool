#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <ScoketController.h>
#include <ApiGetUserList.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<ScoketController>("com.zhuzichu.controller", 1, 0, "ScoketController");

    qmlRegisterType<ApiGetUserList>("Http", 1, 0, "ApiGetUserList");

    const QUrl url(u"qrc:/SocketTool/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
