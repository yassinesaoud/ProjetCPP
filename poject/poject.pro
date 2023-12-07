#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#-------------------------------------------------

QT       += core gui sql
QT += sql
QT += widgets

QT += core gui sql multimedia multimediawidgets printsupport charts widgets axcontainer serialport
QT += core gui charts
QT += multimedia multimediawidgets

IMAGES += images/

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    connection.cpp \
    employe.cpp \
    facture.cpp \
    flotee.cpp \
    generateurpdf.cpp \
    main.cpp \
    mainwindow.cpp \
    notification.cpp \
    promotions.cpp \
    qrcode.cpp \
    reservations.cpp \
    smtp.cpp \
    trajets.cpp \
    ventevehicule.cpp

HEADERS += \
    arduino.h \
    connection.h \
    employe.h \
    facture.h \
    flotee.h \
    generateurpdf.h \
    mainwindow.h \
    notification.h \
    promotions.h \
    qrcode.h \
    reservations.h \
    smtp.h \
    trajets.h \
    ventevehicule.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
