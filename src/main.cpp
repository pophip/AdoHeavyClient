#include <QtGui/QApplication>
#include <QTabWidget>
#include <QGridLayout>

#include "Log.h"
#include "ConsoleWidget.h"
#include "PublishingWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ConsoleWidget * console = new ConsoleWidget;
    PublishingWidget * publisher = new PublishingWidget;

    QTabWidget container;
    container.setTabPosition(QTabWidget::West);
    container.addTab(publisher, "Local Folders");
    container.addTab(console, "Logs");
    container.show();

    QObject::connect(&Log::Instance(), SIGNAL(logged(QString)),
                     console, SLOT(log(QString)));
    Log::Instance().log("This is the first log.");

    return a.exec();
}
