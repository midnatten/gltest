#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H

#include <QQuickItem>

#include "window.h"

class WindowManager : public QObject
{
    Q_OBJECT

public:
    WindowManager(QObject *parent = 0);
    ~WindowManager();

    void setRootItem(QQuickItem *item);
    void show();

    QQuickWindow* window() { return m_window; }

private:
    Window *m_window;
};

#endif // WINDOWMANAGER_H
