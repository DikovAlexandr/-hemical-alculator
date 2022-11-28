/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *selectEquation;
    QLabel *selectProblem;
    QLineEdit *inputParam1;
    QLabel *parametr1;
    QLabel *parametr2;
    QLineEdit *inputParam2;
    QLabel *mu;
    QLineEdit *inputMu;
    QWidget *widget;
    QVBoxLayout *equations;
    QRadioButton *IdealGase;
    QRadioButton *vanDerVaals;
    QRadioButton *diterichi;
    QWidget *widget1;
    QVBoxLayout *problemStatement;
    QRadioButton *pT;
    QRadioButton *pV;
    QRadioButton *VT;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        selectEquation = new QLabel(centralwidget);
        selectEquation->setObjectName("selectEquation");
        selectEquation->setGeometry(QRect(419, 20, 291, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(14);
        selectEquation->setFont(font);
        selectProblem = new QLabel(centralwidget);
        selectProblem->setObjectName("selectProblem");
        selectProblem->setGeometry(QRect(30, 20, 320, 40));
        selectProblem->setFont(font);
        inputParam1 = new QLineEdit(centralwidget);
        inputParam1->setObjectName("inputParam1");
        inputParam1->setGeometry(QRect(120, 300, 141, 41));
        parametr1 = new QLabel(centralwidget);
        parametr1->setObjectName("parametr1");
        parametr1->setGeometry(QRect(120, 260, 141, 20));
        parametr1->setFont(font);
        parametr2 = new QLabel(centralwidget);
        parametr2->setObjectName("parametr2");
        parametr2->setGeometry(QRect(290, 260, 131, 21));
        parametr2->setFont(font);
        inputParam2 = new QLineEdit(centralwidget);
        inputParam2->setObjectName("inputParam2");
        inputParam2->setGeometry(QRect(290, 300, 121, 41));
        mu = new QLabel(centralwidget);
        mu->setObjectName("mu");
        mu->setGeometry(QRect(440, 260, 241, 20));
        mu->setFont(font);
        inputMu = new QLineEdit(centralwidget);
        inputMu->setObjectName("inputMu");
        inputMu->setGeometry(QRect(440, 300, 231, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(420, 80, 351, 151));
        equations = new QVBoxLayout(widget);
        equations->setObjectName("equations");
        equations->setContentsMargins(0, 0, 0, 0);
        IdealGase = new QRadioButton(widget);
        IdealGase->setObjectName("IdealGase");
        IdealGase->setFont(font);
        IdealGase->setIconSize(QSize(20, 20));

        equations->addWidget(IdealGase);

        vanDerVaals = new QRadioButton(widget);
        vanDerVaals->setObjectName("vanDerVaals");
        vanDerVaals->setFont(font);

        equations->addWidget(vanDerVaals);

        diterichi = new QRadioButton(widget);
        diterichi->setObjectName("diterichi");
        diterichi->setFont(font);

        equations->addWidget(diterichi);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 80, 311, 151));
        problemStatement = new QVBoxLayout(widget1);
        problemStatement->setObjectName("problemStatement");
        problemStatement->setContentsMargins(0, 0, 0, 0);
        pT = new QRadioButton(widget1);
        pT->setObjectName("pT");
        pT->setFont(font);

        problemStatement->addWidget(pT);

        pV = new QRadioButton(widget1);
        pV->setObjectName("pV");
        pV->setFont(font);

        problemStatement->addWidget(pV);

        VT = new QRadioButton(widget1);
        VT->setObjectName("VT");
        VT->setFont(font);

        problemStatement->addWidget(VT);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        selectEquation->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217", nullptr));
        selectProblem->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\272\320\260\320\272\321\203\321\216 \320\267\320\260\320\264\320\260\321\207\321\203 \321\205\320\276\321\202\320\270\321\202\320\265 \321\200\320\265\321\210\320\270\321\202\321\214", nullptr));
        parametr1->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\320\273\320\270\321\207\320\270\320\275\320\260 p, \320\262 \320\237\320\260", nullptr));
        parametr2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\320\273\320\270\321\207\320\270\320\275\320\260 T, \320\262 \320\232", nullptr));
        mu->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\211\320\265\321\201\321\202\320\262\320\260, \320\262 \320\274\320\276\320\273\321\217\321\205", nullptr));
        IdealGase->setText(QCoreApplication::translate("MainWindow", "\320\230\320\264\320\265\320\260\320\273\321\214\320\275\321\213\320\271 \320\263\320\260\320\267", nullptr));
        vanDerVaals->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\222\320\260\320\275-\320\264\320\265\321\200-\320\222\320\260\320\260\320\273\321\214\321\201\320\260", nullptr));
        diterichi->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\224\320\270\321\202\320\265\321\200\320\270\321\207\320\270", nullptr));
        pT->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\262\320\265\321\201\321\202\320\275\321\213 p \320\270 T, \320\275\320\260\320\271\321\202\320\270 V", nullptr));
        pV->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\262\320\265\321\201\321\202\320\275\321\213 p \320\270 V, \320\275\320\260\320\271\321\202\320\270 \320\242", nullptr));
        VT->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\262\320\265\321\201\321\202\320\275\321\213 V \320\270 T, \320\275\320\260\320\271\321\202\320\270 p", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\245\320\270\320\274\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
