#include "PublishingWidget.h"
#include <QGridLayout>
#include <QLabel>
#include <QHeaderView>

#include "Log.h"

PublishingWidget::PublishingWidget(QWidget *parent)
    : QWidget(parent)
    , m_baseDirectory(QDir::homePath())
{

    m_localFilesystemView = createLocalFileSystemView();
    m_selectedFoldersView = new SelectedFoldersView;
    m_publishedFilesView = new PublishedFilesView;
    setupLayout();

    QObject::connect(m_localFilesystemView, SIGNAL(doubleClicked(QModelIndex)),
                     this, SLOT(publishFolder(QModelIndex)));
    QObject::connect(m_selectedFoldersView, SIGNAL(folderPublished(QString)),
                     m_publishedFilesView, SLOT(publishFolderContent(QString)));
}

QTreeView * PublishingWidget::createLocalFileSystemView()
{
    QTreeView * view = new QTreeView;
    QFileSystemModel * localFilesystemModel = new QFileSystemModel(view);
    localFilesystemModel->setFilter(QDir::Dirs|QDir::NoDotAndDotDot);
    localFilesystemModel->setRootPath(m_baseDirectory);
    view->setModel(localFilesystemModel);
    return view;
}

void PublishingWidget::publishFolder(QModelIndex folderItemIndex)
{
    m_selectedFoldersView->publishFolder(folderItemIndex.data(QFileSystemModel::FilePathRole).toString());
}

void PublishingWidget::setupLayout()
{
    QGridLayout * layout = new QGridLayout;
    this->setLayout(layout);

    QLabel * localFileSystemHeaderLabel = new QLabel("Local Filesystem");
    layout->addWidget(localFileSystemHeaderLabel, 0, 0);
    layout->addWidget(m_localFilesystemView, 1, 0);

    QLabel * selectedFoldersHeaderLabel = new QLabel("Selected Folders");
    layout->addWidget(selectedFoldersHeaderLabel, 0, 1);
    layout->addWidget(m_selectedFoldersView, 1, 1);

    layout->addWidget(m_publishedFilesView, 2, 0, 1, 2);
}

PublishingWidget::~PublishingWidget()
{
}
