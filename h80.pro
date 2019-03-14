TEMPLATE = app
TARGET = h80
DESTDIR =Debug
CONFIG += debug
QT += widgets 
QT += testlib
 
 
INCLUDEPATH += .\
        ../segdata
# Input
HEADERS += \
        ../segdata/QTapeIO.h
        

SOURCES +=  \ 
         ../segdata/QTapeIO.cpp\
	 h80.cpp
