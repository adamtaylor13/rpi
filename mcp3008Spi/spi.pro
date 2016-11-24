TEMPLATE = lib
CONFIG += qt plugin
QT += qml

DESTDIR +=  ../imports/SpiPlugin
OBJECTS_DIR = tmp
MOC_DIR = tmp

TARGET = spiplugin

HEADERS += \
        mcp3008Spi.h

SOURCES += \
        mcp3008Spi.cpp \
        mcp3008SpiTest.cpp
