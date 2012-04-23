#ifndef PUBLISHINGWIDGET_H
#define PUBLISHINGWIDGET_H

#include <QWidget>
#include <QTreeView>
#include <QTableView>
#include <QDir>
#include <QFileSystemModel>
#include <QStandardItemModel>

#include "SelectedFoldersView.h"
#include "PublishedFilesView.h"

class PublishingWidget : public QWidget
{
    Q_OBJECT
public:
    explicit PublishingWidget(QWidget *parent = 0);
    ~PublishingWidget();

signals:
    void publishFolder(QString dirPath);

public slots:
    void publishFolder(QModelIndex folderItemIndex);

private:
    QString m_baseDirectory;

    QTreeView * m_localFilesystemView;
    QFileSystemModel * m_filesystemModel;

    PublishedFilesView * m_publishedFilesView;

    SelectedFoldersView * m_selectedFoldersView;

    QStandardItemModel * m_publishedFilesModel;

    QTreeView * createLocalFileSystemView();

    void setupLayout();

    
};

#endif // PUBLISHINGWIDGET_H
