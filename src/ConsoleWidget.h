#ifndef CONSOLEWIDGET_H
#define CONSOLEWIDGET_H

#include <QWidget>
#include <QTextEdit>

class ConsoleWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ConsoleWidget(QWidget *parent = 0);
    
signals:
    
public slots:
    void log(QString textToLog);

private:
    QTextEdit * m_logView;
    void setupLogView();
    
};

#endif // CONSOLEWIDGET_H
