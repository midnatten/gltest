TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += src/main.cpp \
    src/window.cpp \
    src/windowmanager.cpp \
    src/viewmanager.cpp \
    src/application.cpp

HEADERS += \
    src/window.h \
    src/windowmanager.h \
    src/viewmanager.h \
    src/application.h

OTHER_FILES += qml/*

qml.files = qml/*
qml.path = $$OUT_PWD/qml

INSTALLS += qml


