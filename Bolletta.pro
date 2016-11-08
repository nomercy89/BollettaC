TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    orario.cpp \
    telefonata.cpp \
    bolletta.cpp

HEADERS += \
    orario.h \
    telefonata.h \
    bolletta.h
