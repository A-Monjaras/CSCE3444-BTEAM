QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    loginpage.cpp \
    mainwindow.cpp \
    seconddialog.cpp \
    CarProfile.cpp \
    dialog.cpp \
    License.cpp \
    parkingdialog.cpp \
    UserProfile.cpp


HEADERS += \
    loginpage.h \
    mainwindow.h \
    seconddialog.h \
    CarProfile.h \
    dialog.h \
    License.h \
    parkingdialog.h \
    UserProfile.h


FORMS += \
    loginpage.ui \
    mainwindow.ui \
    seconddialog.ui \
    dialog.ui \
    parkingdialog.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    logo.qrc
