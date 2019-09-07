QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExpGame
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
    core/tile.cpp \
    core/board.cpp \
    core/game.cpp \
    gui/qgameboard.cpp \
    gui/qtile.cpp \
    gui/qresetbutton.cpp \
    core/observer.cpp \
    gui/qgameoverwindow.cpp\
    core/subject.cpp


HEADERS  += \
    core/tile.h \
    core/board.h \
    core/game.h \
    gui/qgameboard.h \
    gui/qtile.h \
    gui/qresetbutton.h \
    gui/qgameoverwindow.h\
    core/observer.h \
    core/subject.h


