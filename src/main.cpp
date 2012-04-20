#include <QtGui/QApplication>
#include <QTabWidget>
#include <QGridLayout>

#include "ConsoleWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTabWidget container;
    container.setTabPosition(QTabWidget::West);

    ConsoleWidget * console = new ConsoleWidget;
    container.addTab(console, "Logs");
    console->log("This is the first log.");


    container.show();
    return a.exec();
}
