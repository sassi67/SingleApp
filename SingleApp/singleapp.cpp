#include "singleapp.h"

SingleApp::SingleApp(const QString& appName)
    : m_QSharedMem(new QSharedMemory(appName)),
      m_AlreadyRunning(false)
{
    if (m_QSharedMem->create(1) == false)
        m_AlreadyRunning = true;
}

bool SingleApp::IsAlreadyRunning()
{
    return m_AlreadyRunning;
}

SingleApp::SingleApp()
{
    delete m_QSharedMem;
}
