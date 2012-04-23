#ifndef SELECTEDFILESVIEW_H
#define SELECTEDFILESVIEW_H

#include <QTableView>
#include <QStandardItemModel>

class SelectedFoldersView : public QTableView
{
    Q_OBJECT
public:
    explicit SelectedFoldersView(QWidget *parent = 0);

signals:
    void folderPublished(QString fullPath);

public slots:
    void publishFolder(QString dirPath);

private:
    QStandardItemModel * m_selectedFoldersModel;

    void addFile(QString fullPath);
};

#endif // SELECTEDFILESVIEW_H
