#include "windowmanager.h"

WindowManager::WindowManager(QObject *parent):
    QObject(parent),
    m_window(new Window())
{
    m_window->setWidth(800);
    m_window->setHeight(600);
    m_window->setColor(Qt::transparent);
}

WindowManager::~WindowManager()
{
    delete m_window;
}

void WindowManager::setRootItem(QQuickItem *item)
{
    item->setParentItem(m_window->contentItem());
    item->setWidth(m_window->width());
    item->setHeight(m_window->height());
}

void WindowManager::show()
{
    m_window->show();
}
