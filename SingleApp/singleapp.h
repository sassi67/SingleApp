#ifndef SINGLEAPP_H
#define SINGLEAPP_H

#include <QString>
#include <QSharedMemory>

class SingleApp
{
public:
    SingleApp(const QString& appName);
    bool IsAlreadyRunning();

protected:
private:
    QSharedMemory   *m_QSharedMem;
    bool            m_AlreadyRunning;
    SingleApp();
};

#endif // SINGLEAPP_H
