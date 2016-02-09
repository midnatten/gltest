#ifndef APPLICATION_H
#define APPLICATION_H

#include <QGuiApplication>
#include <QQmlEngine>

#include "windowmanager.h"
#include "viewmanager.h"

class Application : public QGuiApplication
{
public:
    Application(int &argc, char **argv);
    ~Application();

    void init();

private:
    QQmlEngine *m_engine;
    WindowManager *m_windowMgr;
    ViewManager *m_viewManager;
};

#endif // APPLICATION_H
