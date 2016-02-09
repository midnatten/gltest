#include "viewmanager.h"

#include <QQmlComponent>

ViewManager::ViewManager(QObject *parent):
    QObject(parent)
{
}

QQuickItem* ViewManager::rootItem(QQmlEngine *engine)
{
    QQmlComponent component(engine, QUrl(QStringLiteral("qml/main.qml")));
    return qobject_cast<QQuickItem*>(component.create());
}
