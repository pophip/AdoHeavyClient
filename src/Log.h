#ifndef LOG_H
#define LOG_H

#include <QObject>

class Log : public QObject
{
    Q_OBJECT
public:
    static Log & Instance();

signals:
    void logged(QString textToLog);

public slots:
    void log(QString textToLog);

private:
    explicit Log(); //< private constructor for singleton pattern;
    Log(const Log &);
    Log & operator=(const Log &);

};

#endif // LOG_H
