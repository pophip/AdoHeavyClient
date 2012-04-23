#include "SelectedFoldersView.h"

#include <QStandardItem>
#include <QHeaderView>
#include <QDir>

SelectedFoldersView::SelectedFoldersView(QWidget *parent) :
    QTableView(parent)
{
    m_selectedFoldersModel = new QStandardItemModel;
    m_selectedFoldersModel->setHorizontalHeaderLabels(QStringList() << "Folder" << "File Count" << "Full Path");
    this->verticalHeader()->hide();
    this->horizontalHeader()->stretchLastSection();
    this->setEditTriggers(QTableView::NoEditTriggers);
    this->setModel(m_selectedFoldersModel);
}

void SelectedFoldersView::publishFolder(QString dirPath)
{
    QDir folder(dirPath);
    bool isPresentAlready =
            m_selectedFoldersModel->findItems(folder.absolutePath(), Qt::MatchExactly, 2).size() > 0;
    if (!isPresentAlready)
    {
        QStandardItem * folderNameItem = new QStandardItem;
        folderNameItem->setData(folder.dirName(), Qt::DisplayRole);
        QStandardItem * folderFilesCount = new QStandardItem;
        folderFilesCount->setData(QString::number(0), Qt::DisplayRole);
        QStandardItem * folderFullPath = new QStandardItem;
        folderFullPath->setData(folder.absolutePath(), Qt::DisplayRole);
        QList<QStandardItem *> row;
        row << folderNameItem << folderFilesCount << folderFullPath;
        m_selectedFoldersModel->appendRow(row);

        emit folderPublished(folder.absolutePath());
    }
}
