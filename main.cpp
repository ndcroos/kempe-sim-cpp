#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <CGAL/Simple_cartesian.h>
#include <ginac/ginac.h>

typedef Kernel::Point_2 Point_2;

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
