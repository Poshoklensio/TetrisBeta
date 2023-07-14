TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        game.cpp \
        main.cpp \
        board.cpp \
        tetromino.cpp

HEADERS += \
    game.h \
    board.h \
    tetromino.h
