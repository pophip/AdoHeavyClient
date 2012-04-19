#include "LocalFolderWidget.h"
#include <QGridLayout>
#include <QTreeView>
#include <QDir>
#include <QDebug>

LocalFolderWidget::LocalFolderWidget(QString dirName, QWidget *parent)
    : m_dirName(dirName)
    , QWidget(parent)
{
    QGridLayout * layout = new QGridLayout;
    setLayout(layout);


    QStandardItemModel * fileListModel = new QStandardItemModel;
    fileListModel->setHorizontalHeaderLabels(QStringList(QDir(dirName).absolutePath()) << "o_O");
    QDir dir(dirName);
    dir.makeAbsolute();
    fileListModel->invisibleRootItem()->appendRow(exploreDir(dir));

    QTreeView * fileListView = new QTreeView(this);
    layout->addWidget(fileListView, 0,0);
    fileListView->setModel(fileListModel);

    qWarning() << fileListView->isFirstColumnSpanned(0,fileListModel->indexFromItem(fileListModel->invisibleRootItem()));
}

QStandardItem * LocalFolderWidget::exploreDir(QDir iDir)
{
    qWarning() << "Exploring" << iDir.absolutePath();
    QStandardItem * rootItem = new QStandardItem(iDir.dirName());
    if(!iDir.exists())
    {
        qWarning() << iDir.dirName() << " is not a directory.";
        exit(1);
    }
    // explore directories
    QStringList subDirs = iDir.entryList(QDir::Dirs|QDir::NoDotAndDotDot);
    QStringListIterator subDirIterator(subDirs);
    while(subDirIterator.hasNext())
    {
        rootItem->appendRow(exploreDir(iDir.filePath(subDirIterator.next())));
    }
    // explore files
    QStringList files = iDir.entryList(QDir::Files);
    QStringListIterator filesIterator(files);
    while(filesIterator.hasNext())
    {
        qWarning() << "Adding file " << filesIterator.peekNext();
        QList<QStandardItem *> row;
        row << new QStandardItem(filesIterator.next()) << new QStandardItem("o_0");
        rootItem->appendRow(row);
    }
    return rootItem;
}
