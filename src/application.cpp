#include "application.h"

Application::Application(int &argc, char **argv):
    QGuiApplication(argc, argv),
    m_engine(new QQmlEngine(this)),
    m_windowMgr(new WindowManager(this)),
    m_viewManager(new ViewManager(this))
{
}

Application::~Application()
{
    delete m_engine;
    delete m_windowMgr;
    delete m_viewManager;
}

void Application::init()
{
    m_windowMgr->setRootItem(m_viewManager->rootItem(m_engine));
    m_windowMgr->show();
}
