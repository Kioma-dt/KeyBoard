/********************************************************************************
** Form generated from reading UI file 'winwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINWINDOW_H
#define UI_WINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_WinWindow
{
public:
    QTextEdit *textEdit;
    QPushButton *buttonRepeat;
    QPushButton *buttonNew;

    void setupUi(QDialog *WinWindow)
    {
        if (WinWindow->objectName().isEmpty())
            WinWindow->setObjectName("WinWindow");
        WinWindow->resize(400, 300);
        textEdit = new QTextEdit(WinWindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 60, 341, 121));
        textEdit->setReadOnly(true);
        textEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        buttonRepeat = new QPushButton(WinWindow);
        buttonRepeat->setObjectName("buttonRepeat");
        buttonRepeat->setGeometry(QRect(30, 220, 88, 26));
        buttonNew = new QPushButton(WinWindow);
        buttonNew->setObjectName("buttonNew");
        buttonNew->setGeometry(QRect(220, 220, 121, 26));

        retranslateUi(WinWindow);

        QMetaObject::connectSlotsByName(WinWindow);
    } // setupUi

    void retranslateUi(QDialog *WinWindow)
    {
        WinWindow->setWindowTitle(QCoreApplication::translate("WinWindow", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("WinWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700; color:#e01b24;\">YOU WIN</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700; color:#e01b24;\">CONGRATULATIONS</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0p"
                        "x; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700; color:#e01b24;\">TRY AGAIN?</span></p></body></html>", nullptr));
        buttonRepeat->setText(QCoreApplication::translate("WinWindow", "REPEAT", nullptr));
        buttonNew->setText(QCoreApplication::translate("WinWindow", "TRY NEW TEXT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinWindow: public Ui_WinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINWINDOW_H
