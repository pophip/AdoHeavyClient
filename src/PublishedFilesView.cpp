#include "PublishedFilesView.h"

#include <QDebug>
#include <QHeaderView>
#include <QFileInfo>

#include "Log.h"

PublishedFilesView::PublishedFilesView(QWidget *parent) :
    QTableView(parent)
{
    this->setEditTriggers(QTableView::NoEditTriggers);
    this->horizontalHeader()->stretchLastSection();

    m_publishedFilesModel = new QStandardItemModel;
    QStringList headerLabels;
    headerLabels << "File Name" << "HashSum" << "Full Path";
    m_publishedFilesModel->setHorizontalHeaderLabels(headerLabels);
    this->setModel(m_publishedFilesModel);
}

void PublishedFilesView::publishFolderContent(QString fullPath)
{
    QDir folder(fullPath);
    Log::get() << "Exploring" << folder.absolutePath() << Log::Endl;
    if(!folder.exists())
    {
        Log::get() << folder.dirName() << " is not a directory." << Log::Endl;
        exit(1);
    }

    // explore directories
    QStringList subDirs = folder.entryList(QDir::Dirs|QDir::NoDotAndDotDot);
    QStringListIterator subDirIterator(subDirs);
    while(subDirIterator.hasNext())
        publishFolderContent(folder.absoluteFilePath(subDirIterator.next()));

    // explore files
    listFiles(folder);
}

void PublishedFilesView::listFiles(QDir folder)
{
    QFileInfoList files = folder.entryInfoList(QDir::Files);
    QListIterator<QFileInfo> filesIterator(files);
    while(filesIterator.hasNext())
        addFile(filesIterator.next());
}

void PublishedFilesView::addFile(QFileInfo file)
{
    Log::get() << "Adding file " << file.absoluteFilePath() << Log::Endl;
    QList<QStandardItem *> row;
    row << new QStandardItem(file.fileName())
        << new QStandardItem("o_O")
        << new QStandardItem(file.absoluteFilePath());
    m_publishedFilesModel->appendRow(row);
}
