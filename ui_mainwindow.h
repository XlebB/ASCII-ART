/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadbutton;
    QPushButton *ecsport;
    QFrame *line;
    QLabel *label;
    QLabel *finish;
    QLineEdit *lineEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(424, 232);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background: #505050;\n"
"}"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 401, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loadbutton = new QPushButton(horizontalLayoutWidget);
        loadbutton->setObjectName(QString::fromUtf8("loadbutton"));
        QFont font;
        font.setBold(false);
        loadbutton->setFont(font);
        loadbutton->setCursor(QCursor(Qt::PointingHandCursor));
        loadbutton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #757575;\n"
"	color: #FFFFFF;\n"
"   border-style: outset;\n"
"    padding: 1px;\n"
"	border-radius: 8px;\n"
"}"));

        horizontalLayout->addWidget(loadbutton);

        ecsport = new QPushButton(horizontalLayoutWidget);
        ecsport->setObjectName(QString::fromUtf8("ecsport"));
        ecsport->setMaximumSize(QSize(2000000, 16777215));
        ecsport->setSizeIncrement(QSize(0, 0));
        ecsport->setBaseSize(QSize(0, 0));
        QFont font1;
        ecsport->setFont(font1);
        ecsport->setCursor(QCursor(Qt::PointingHandCursor));
        ecsport->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #757575;\n"
"	color: #FFFFFF;\n"
"   border-style: outset;\n"
"    padding: 1px;\n"
"	border-radius: 8px;\n"
"}"));

        horizontalLayout->addWidget(ecsport);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-23, 120, 451, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 401, 16));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        finish = new QLabel(centralwidget);
        finish->setObjectName(QString::fromUtf8("finish"));
        finish->setGeometry(QRect(170, 70, 161, 41));
        QFont font3;
        font3.setPointSize(20);
        finish->setFont(font3);
        finish->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 150, 171, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("    background-color: #757575;\n"
"	color: #FFFFFF;\n"
"   border-style: outset;\n"
"    padding: 1px;\n"
"	border-radius: 8px;"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(190, 140, 221, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("    background-color: #757575;\n"
"	color: #FFFFFF;\n"
"   border-style: outset;\n"
"    padding: 1px;\n"
"	border-radius: 8px;"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("    background-color: #757575;\n"
"	color: #FFFFFF;\n"
"   border-style: outset;\n"
"    padding: 1px;\n"
"	border-radius: 8px;"));

        verticalLayout->addWidget(pushButton);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 190, 171, 20));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"	color: #FFFFFF;\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loadbutton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        ecsport->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202 \320\262 \321\202\320\265\320\272\321\201\321\202 ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214:", nullptr));
        finish->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\263\321\200\320\260\320\264\320\270\320\265\320\275\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\213\320\271", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">12 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262 \320\264\320\273\321\217 \320\262\320\262\320\276\320\264\320\260</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
