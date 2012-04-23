#ifndef PUBLISHEDFILESVIEW_H
#define PUBLISHEDFILESVIEW_H

#include <QTableView>
#include <QStandardItemModel>
#include <QDir>

class PublishedFilesView : public QTableView
{
    Q_OBJECT
public:
    explicit PublishedFilesView(QWidget *parent = 0);

signals:

public slots:
    void publishFolderContent(QString fullPath);

private:
    QStandardItemModel * m_publishedFilesModel;

    void listFiles(QDir folder);
    void addFile(QFileInfo file);
};

#endif // PUBLISHEDFILESVIEW_H
