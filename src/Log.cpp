#include "Log.h"

#include <QDebug>

Log::Log()
{
    m_currentLine.setString(new QString);
}

Log& Log::get()
{
    static Log theLog;
    return theLog;
}

void Log::put(QString textToLog)
{
    qWarning() << textToLog;
    emit logged(textToLog);
}

Log & operator<<(Log& log, const Log::endl_t&)
{
    log.m_currentLine.flush();
    log.put(*log.m_currentLine.string());
    delete log.m_currentLine.string();
    log.m_currentLine.setString(new QString());
    return log;
}
