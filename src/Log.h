#ifndef LOG_H
#define LOG_H

#include <QObject>
#include <QTextStream>

class Log : public QObject
{
    Q_OBJECT

public:
    typedef enum { Endl } endl_t;

private:
    template<typename T>
    friend Log & operator<<(Log& put, const T& logData);
    friend Log & operator<<(Log& log, const Log::endl_t&);

public:
    static Log & Instance();

signals:
    void logged(QString textToLog);

public slots:
    void put(QString textToLog);

private:
    explicit Log(); //< private constructor for singleton pattern;
    Log(const Log &);
    Log & operator=(const Log &);

    QTextStream m_currentLine;
};

Log & operator<<(Log& log, const Log::endl_t&);

template<typename T>
Log & operator<<(Log& log, const T& logData)
{
    log.m_currentLine << logData;
    return log;
}

#endif // LOG_H
