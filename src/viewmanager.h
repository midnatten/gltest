#ifndef VIEWMANAGER_H
#define VIEWMANAGER_H

#include <QObject>
#include <QQuickItem>

class ViewManager : public QObject
{
    Q_OBJECT

public:
    ViewManager(QObject *parent = 0);

    QQuickItem* rootItem(QQmlEngine *engine);
};

#endif // VIEWMANAGER_H
