#include "ConsoleWidget.h"
#include <QGridLayout>
#include <QTextEdit>
#include <QColor>
#include <QPalette>
#include <QTime>
#include <QString>

ConsoleWidget::ConsoleWidget(QWidget *parent) :
    QWidget(parent)
{
    QGridLayout * layout = new QGridLayout;
    this->setLayout(layout);

    setupLogView();
    layout->addWidget(m_logView);

}

void ConsoleWidget::log(QString textToLog)
{
    QString logLine;
    logLine.append(QTime::currentTime().toString()).append(" ")
            .append(textToLog);
    m_logView->append(logLine);
}

void ConsoleWidget::setupLogView()
{
    m_logView = new QTextEdit;
    QPalette palette = m_logView->palette();
    palette.setColor(QPalette::Base, Qt::black);
    palette.setColor(QPalette::Text, Qt::white);
    m_logView->setPalette(palette);
}
