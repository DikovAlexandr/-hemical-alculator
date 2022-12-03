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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *inputParam1;
    QLabel *pValue;
    QLabel *TValue;
    QLineEdit *inputParam2;
    QLabel *mu;
    QLineEdit *inputMu;
    QPushButton *start;
    QWidget *formWidget;
    QFormLayout *formLayout;
    QLabel *selectProblem;
    QComboBox *problemSt;
    QLabel *selectEquation;
    QComboBox *equationSt;
    QWidget *paramsWidget;
    QHBoxLayout *moreParams;
    QLabel *label;
    QLineEdit *aParam;
    QLineEdit *bParam;
    QLabel *VValue2;
    QLabel *VValue1;
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
        inputParam1 = new QLineEdit(centralwidget);
        inputParam1->setObjectName("inputParam1");
        inputParam1->setGeometry(QRect(100, 310, 141, 41));
        pValue = new QLabel(centralwidget);
        pValue->setObjectName("pValue");
        pValue->setGeometry(QRect(110, 280, 151, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(14);
        pValue->setFont(font);
        TValue = new QLabel(centralwidget);
        TValue->setObjectName("TValue");
        TValue->setGeometry(QRect(270, 280, 151, 21));
        TValue->setFont(font);
        inputParam2 = new QLineEdit(centralwidget);
        inputParam2->setObjectName("inputParam2");
        inputParam2->setGeometry(QRect(260, 310, 141, 41));
        mu = new QLabel(centralwidget);
        mu->setObjectName("mu");
        mu->setGeometry(QRect(440, 280, 241, 20));
        mu->setFont(font);
        inputMu = new QLineEdit(centralwidget);
        inputMu->setObjectName("inputMu");
        inputMu->setGeometry(QRect(440, 310, 231, 41));
        start = new QPushButton(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(700, 350, 83, 29));
        formWidget = new QWidget(centralwidget);
        formWidget->setObjectName("formWidget");
        formWidget->setGeometry(QRect(50, 20, 481, 209));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName("formLayout");
        selectProblem = new QLabel(formWidget);
        selectProblem->setObjectName("selectProblem");
        selectProblem->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, selectProblem);

        problemSt = new QComboBox(formWidget);
        problemSt->addItem(QString());
        problemSt->addItem(QString());
        problemSt->addItem(QString());
        problemSt->setObjectName("problemSt");

        formLayout->setWidget(1, QFormLayout::LabelRole, problemSt);

        selectEquation = new QLabel(formWidget);
        selectEquation->setObjectName("selectEquation");
        selectEquation->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, selectEquation);

        equationSt = new QComboBox(formWidget);
        equationSt->addItem(QString());
        equationSt->addItem(QString());
        equationSt->addItem(QString());
        equationSt->setObjectName("equationSt");

        formLayout->setWidget(3, QFormLayout::LabelRole, equationSt);

        paramsWidget = new QWidget(formWidget);
        paramsWidget->setObjectName("paramsWidget");
        moreParams = new QHBoxLayout(paramsWidget);
        moreParams->setObjectName("moreParams");
        label = new QLabel(paramsWidget);
        label->setObjectName("label");

        moreParams->addWidget(label);

        aParam = new QLineEdit(paramsWidget);
        aParam->setObjectName("aParam");

        moreParams->addWidget(aParam);

        bParam = new QLineEdit(paramsWidget);
        bParam->setObjectName("bParam");

        moreParams->addWidget(bParam);


        formLayout->setWidget(4, QFormLayout::LabelRole, paramsWidget);

        VValue2 = new QLabel(centralwidget);
        VValue2->setObjectName("VValue2");
        VValue2->setGeometry(QRect(260, 280, 151, 20));
        VValue2->setFont(font);
        VValue1 = new QLabel(centralwidget);
        VValue1->setObjectName("VValue1");
        VValue1->setGeometry(QRect(100, 280, 151, 20));
        VValue1->setFont(font);
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
        pValue->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\320\273\320\270\321\207\320\270\320\275\320\260 p, \320\262 \320\237\320\260", nullptr));
        TValue->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\320\273\320\270\321\207\320\270\320\275\320\260 T, \320\262 \320\232", nullptr));
        mu->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\211\320\265\321\201\321\202\320\262\320\260, \320\262 \320\274\320\276\320\273\321\217\321\205", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        selectProblem->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\272\320\260\320\272\321\203\321\216 \320\267\320\260\320\264\320\260\321\207\321\203 \321\205\320\276\321\202\320\270\321\202\320\265 \321\200\320\265\321\210\320\270\321\202\321\214", nullptr));
        problemSt->setItemText(0, QCoreApplication::translate("MainWindow", "\320\230\320\267\320\262\320\265\321\201\321\202\320\275\321\213 p \320\270 T, \320\275\320\260\320\271\321\202\320\270 V", nullptr));
        problemSt->setItemText(1, QCoreApplication::translate("MainWindow", "\320\230\320\267\320\262\320\265\321\201\321\202\320\275\321\213 p \320\270 V, \320\275\320\260\320\271\321\202\320\270 T", nullptr));
        problemSt->setItemText(2, QCoreApplication::translate("MainWindow", "\320\230\320\267\320\262\320\265\321\201\321\202\320\275\321\213 V \320\270 T, \320\275\320\260\320\271\321\202\320\270 p", nullptr));

        selectEquation->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217", nullptr));
        equationSt->setItemText(0, QCoreApplication::translate("MainWindow", "\320\230\320\264\320\265\320\260\320\273\321\214\320\275\321\213\320\271 \320\263\320\260\320\267", nullptr));
        equationSt->setItemText(1, QCoreApplication::translate("MainWindow", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\222\320\260\320\275-\320\264\320\265\321\200-\320\222\320\260\320\260\320\273\321\214\321\201\320\260", nullptr));
        equationSt->setItemText(2, QCoreApplication::translate("MainWindow", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\224\320\270\321\202\320\265\321\200\320\270\321\207\320\270", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 a \320\270 b", nullptr));
        VValue2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\320\273\320\270\321\207\320\270\320\275\320\260 V, \320\262 \320\274^3", nullptr));
        VValue1->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\320\273\320\270\321\207\320\270\320\275\320\260 V, \320\262 \320\274^3", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\245\320\270\320\274\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
