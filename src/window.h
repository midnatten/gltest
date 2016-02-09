#ifndef WINDOW_H
#define WINDOW_H

#include <QQuickWindow>

class Window : public QQuickWindow
{
    Q_OBJECT

public:
    Window(QWindow *parent = 0);
};

#endif // WINDOW_H
