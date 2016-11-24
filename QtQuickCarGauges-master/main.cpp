#include <ViewManagement.h>
#include <QGuiApplication>
#include <QScopedPointer>
#include <QApplication>
#include "qtgpio.h"

int main(int ac, char **av)
{
    QScopedPointer<QGuiApplication> app(new QGuiApplication(ac, av));
    ViewManagement *view = ViewManagement::getInstance();

    view->setSource(QUrl("qrc:/qml/main.qml"));
    view->show();

//    QtGpio window; // instantiate a QtGpio object
//    window.show(); // show it

    return app->exec();
}

//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv); //instantiate object responsible for Qt's event loop
//    QtGpio window; // instantiate a QtGpio object
//    window.show(); // show it
//    return app.exec();// start the Event loop
//}
