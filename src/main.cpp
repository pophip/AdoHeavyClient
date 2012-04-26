#include <QtGui/QApplication>
#include <QTabWidget>
#include <QGridLayout>

#include "Log.h"
#include "ConsoleWidget.h"
#include "PublishingWidget.h"

// Test cases
#include "test/ChunkByChunkFileReaderTest.h"
#include "test/FileHasherTest.h"

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

    QObject::connect(&Log::get(), SIGNAL(logged(QString)),
                     console, SLOT(log(QString)));
    Log::get() << "This is the first log." << Log::Endl;

    // Test cases
    ChunkByChunkFileReaderTest().run();
    FileHasherTest().run();

    return a.exec();
}
