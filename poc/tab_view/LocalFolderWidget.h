#ifndef LOCALFOLDERWIDGET_H
#define LOCALFOLDERWIDGET_H

#include <QDir>
#include <QWidget>
#include <QStandardItem>

class LocalFolderWidget : public QWidget
{
    Q_OBJECT
public:
    explicit LocalFolderWidget(QString dirName, QWidget *parent = 0);
    
signals:
    
public slots:

private:
    QStandardItem * exploreDir(QDir iDir);
    QString m_dirName;
    
};

#endif // LOCALFOLDERWIDGET_H
