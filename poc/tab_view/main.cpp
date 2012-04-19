#include <QtGui/QApplication>
#include <QTabWidget>
#include <QGridLayout>
#include <QDir>
#include <QMotifStyle>

#include "LocalFolderWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTabWidget tab_widget;
    tab_widget.setTabPosition(QTabWidget::West);

    QWidget publishWidget;
    QGridLayout publishLayout;
    publishWidget.setLayout(&publishLayout);

    LocalFolderWidget localFolderView("../");
    tab_widget.addTab(&publishWidget, "Local Folder");
    publishLayout.addWidget(&localFolderView, 0, 0);


    tab_widget.show();
    return a.exec();
}
