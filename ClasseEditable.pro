TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    cexception.cpp

HEADERS += \
    cexception.h \
    cstcodeerr.h \
    ieditable.hpp
