#include "Log.h"

#include <QDebug>

Log::Log()
{
}

Log& Log::Instance()
{
    static Log theLog;
    return theLog;
}

void Log::log(QString textToLog)
{
    qWarning() << textToLog;
    emit logged(textToLog);
}
