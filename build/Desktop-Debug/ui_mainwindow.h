/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *userInput;
    QTextEdit *keyBackSpace;
    QTextEdit *keyRevSlash;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *keyA;
    QTextEdit *keyS;
    QTextEdit *keyD;
    QTextEdit *keyF;
    QTextEdit *keyG;
    QTextEdit *keyH;
    QTextEdit *keyJ;
    QTextEdit *keyK;
    QTextEdit *keyL;
    QTextEdit *keySemicolon;
    QTextEdit *keyQuote;
    QTextEdit *keyEnter;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *keyZ;
    QTextEdit *keyX;
    QTextEdit *keyC;
    QTextEdit *keyV;
    QTextEdit *keyB;
    QTextEdit *keyN;
    QTextEdit *keyM;
    QTextEdit *keyComma;
    QTextEdit *keyDot;
    QTextEdit *keySlash;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *keyQuoteLeft;
    QTextEdit *key1;
    QTextEdit *key2;
    QTextEdit *key3;
    QTextEdit *key4;
    QTextEdit *key5;
    QTextEdit *key6;
    QTextEdit *key7;
    QTextEdit *key8;
    QTextEdit *key9;
    QTextEdit *key0;
    QTextEdit *keyMinus;
    QTextEdit *keyEqual;
    QTextEdit *keyShiftR;
    QTextEdit *keyTab;
    QTextEdit *keyCaps;
    QTextEdit *keyShiftL;
    QTextEdit *keySpace;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QTextEdit *keyQ;
    QTextEdit *keyW;
    QTextEdit *keyE;
    QTextEdit *keyR;
    QTextEdit *keyT;
    QTextEdit *keyY;
    QTextEdit *keyU;
    QTextEdit *keyI;
    QTextEdit *keyO;
    QTextEdit *keyP;
    QTextEdit *keySqrBrackL;
    QTextEdit *keySqrBrackR;
    QTextEdit *taskText;
    QPushButton *buttonOpenFile;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *labelAccuracy;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLabel *labelCharsSec;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        userInput = new QTextEdit(centralwidget);
        userInput->setObjectName("userInput");
        userInput->setGeometry(QRect(140, 110, 921, 31));
        userInput->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        userInput->setFocusPolicy(Qt::NoFocus);
        userInput->setReadOnly(true);
        userInput->setTextInteractionFlags(Qt::NoTextInteraction);
        keyBackSpace = new QTextEdit(centralwidget);
        keyBackSpace->setObjectName("keyBackSpace");
        keyBackSpace->setGeometry(QRect(1000, 380, 141, 40));
        keyBackSpace->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyBackSpace->setFocusPolicy(Qt::NoFocus);
        keyBackSpace->setTextInteractionFlags(Qt::NoTextInteraction);
        keyRevSlash = new QTextEdit(centralwidget);
        keyRevSlash->setObjectName("keyRevSlash");
        keyRevSlash->setGeometry(QRect(1040, 430, 101, 39));
        keyRevSlash->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyRevSlash->setFocusPolicy(Qt::NoFocus);
        keyRevSlash->setReadOnly(true);
        keyRevSlash->setTextInteractionFlags(Qt::NoTextInteraction);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(210, 480, 771, 41));
        layoutWidget->setFocusPolicy(Qt::NoFocus);
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        keyA = new QTextEdit(layoutWidget);
        keyA->setObjectName("keyA");
        keyA->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyA->setFocusPolicy(Qt::NoFocus);
        keyA->setReadOnly(true);
        keyA->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyA);

        keyS = new QTextEdit(layoutWidget);
        keyS->setObjectName("keyS");
        keyS->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyS->setFocusPolicy(Qt::NoFocus);
        keyS->setReadOnly(true);
        keyS->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyS);

        keyD = new QTextEdit(layoutWidget);
        keyD->setObjectName("keyD");
        keyD->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyD->setFocusPolicy(Qt::NoFocus);
        keyD->setReadOnly(true);
        keyD->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyD);

        keyF = new QTextEdit(layoutWidget);
        keyF->setObjectName("keyF");
        keyF->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyF->setFocusPolicy(Qt::NoFocus);
        keyF->setReadOnly(true);
        keyF->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyF);

        keyG = new QTextEdit(layoutWidget);
        keyG->setObjectName("keyG");
        keyG->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyG->setFocusPolicy(Qt::NoFocus);
        keyG->setReadOnly(true);
        keyG->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyG);

        keyH = new QTextEdit(layoutWidget);
        keyH->setObjectName("keyH");
        keyH->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyH->setFocusPolicy(Qt::NoFocus);
        keyH->setReadOnly(true);
        keyH->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyH);

        keyJ = new QTextEdit(layoutWidget);
        keyJ->setObjectName("keyJ");
        keyJ->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyJ->setFocusPolicy(Qt::NoFocus);
        keyJ->setReadOnly(true);
        keyJ->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyJ);

        keyK = new QTextEdit(layoutWidget);
        keyK->setObjectName("keyK");
        keyK->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyK->setFocusPolicy(Qt::NoFocus);
        keyK->setReadOnly(true);
        keyK->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyK);

        keyL = new QTextEdit(layoutWidget);
        keyL->setObjectName("keyL");
        keyL->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyL->setFocusPolicy(Qt::NoFocus);
        keyL->setReadOnly(true);
        keyL->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyL);

        keySemicolon = new QTextEdit(layoutWidget);
        keySemicolon->setObjectName("keySemicolon");
        keySemicolon->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keySemicolon->setFocusPolicy(Qt::NoFocus);
        keySemicolon->setReadOnly(true);
        keySemicolon->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keySemicolon);

        keyQuote = new QTextEdit(layoutWidget);
        keyQuote->setObjectName("keyQuote");
        keyQuote->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyQuote->setFocusPolicy(Qt::NoFocus);
        keyQuote->setReadOnly(true);
        keyQuote->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(keyQuote);

        keyEnter = new QTextEdit(centralwidget);
        keyEnter->setObjectName("keyEnter");
        keyEnter->setGeometry(QRect(990, 480, 151, 40));
        keyEnter->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyEnter->setFocusPolicy(Qt::NoFocus);
        keyEnter->setTextInteractionFlags(Qt::NoTextInteraction);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(230, 530, 711, 41));
        layoutWidget_2->setFocusPolicy(Qt::NoFocus);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        keyZ = new QTextEdit(layoutWidget_2);
        keyZ->setObjectName("keyZ");
        keyZ->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyZ->setFocusPolicy(Qt::NoFocus);
        keyZ->setReadOnly(true);
        keyZ->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keyZ);

        keyX = new QTextEdit(layoutWidget_2);
        keyX->setObjectName("keyX");
        keyX->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyX->setFocusPolicy(Qt::NoFocus);
        keyX->setReadOnly(true);
        keyX->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keyX);

        keyC = new QTextEdit(layoutWidget_2);
        keyC->setObjectName("keyC");
        keyC->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyC->setFocusPolicy(Qt::NoFocus);
        keyC->setReadOnly(true);
        keyC->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keyC);

        keyV = new QTextEdit(layoutWidget_2);
        keyV->setObjectName("keyV");
        keyV->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyV->setFocusPolicy(Qt::NoFocus);
        keyV->setReadOnly(true);
        keyV->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keyV);

        keyB = new QTextEdit(layoutWidget_2);
        keyB->setObjectName("keyB");
        keyB->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyB->setFocusPolicy(Qt::NoFocus);
        keyB->setReadOnly(true);
        keyB->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keyB);

        keyN = new QTextEdit(layoutWidget_2);
        keyN->setObjectName("keyN");
        keyN->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyN->setFocusPolicy(Qt::NoFocus);
        keyN->setReadOnly(true);
        keyN->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keyN);

        keyM = new QTextEdit(layoutWidget_2);
        keyM->setObjectName("keyM");
        keyM->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyM->setFocusPolicy(Qt::NoFocus);
        keyM->setReadOnly(true);
        keyM->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keyM);

        keyComma = new QTextEdit(layoutWidget_2);
        keyComma->setObjectName("keyComma");
        keyComma->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyComma->setFocusPolicy(Qt::NoFocus);
        keyComma->setReadOnly(true);
        keyComma->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keyComma);

        keyDot = new QTextEdit(layoutWidget_2);
        keyDot->setObjectName("keyDot");
        keyDot->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyDot->setFocusPolicy(Qt::NoFocus);
        keyDot->setReadOnly(true);
        keyDot->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keyDot);

        keySlash = new QTextEdit(layoutWidget_2);
        keySlash->setObjectName("keySlash");
        keySlash->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keySlash->setFocusPolicy(Qt::NoFocus);
        keySlash->setReadOnly(true);
        keySlash->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_3->addWidget(keySlash);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(83, 380, 911, 41));
        layoutWidget_3->setFocusPolicy(Qt::NoFocus);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        keyQuoteLeft = new QTextEdit(layoutWidget_3);
        keyQuoteLeft->setObjectName("keyQuoteLeft");
        keyQuoteLeft->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyQuoteLeft->setFocusPolicy(Qt::NoFocus);
        keyQuoteLeft->setReadOnly(true);
        keyQuoteLeft->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(keyQuoteLeft);

        key1 = new QTextEdit(layoutWidget_3);
        key1->setObjectName("key1");
        key1->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key1->setFocusPolicy(Qt::NoFocus);
        key1->setReadOnly(true);
        key1->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key1);

        key2 = new QTextEdit(layoutWidget_3);
        key2->setObjectName("key2");
        key2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key2->setFocusPolicy(Qt::NoFocus);
        key2->setReadOnly(true);
        key2->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key2);

        key3 = new QTextEdit(layoutWidget_3);
        key3->setObjectName("key3");
        key3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key3->setFocusPolicy(Qt::NoFocus);
        key3->setReadOnly(true);
        key3->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key3);

        key4 = new QTextEdit(layoutWidget_3);
        key4->setObjectName("key4");
        key4->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key4->setFocusPolicy(Qt::NoFocus);
        key4->setReadOnly(true);
        key4->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key4);

        key5 = new QTextEdit(layoutWidget_3);
        key5->setObjectName("key5");
        key5->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key5->setFocusPolicy(Qt::NoFocus);
        key5->setReadOnly(true);
        key5->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key5);

        key6 = new QTextEdit(layoutWidget_3);
        key6->setObjectName("key6");
        key6->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key6->setFocusPolicy(Qt::NoFocus);
        key6->setReadOnly(true);
        key6->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key6);

        key7 = new QTextEdit(layoutWidget_3);
        key7->setObjectName("key7");
        key7->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key7->setFocusPolicy(Qt::NoFocus);
        key7->setReadOnly(true);
        key7->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key7);

        key8 = new QTextEdit(layoutWidget_3);
        key8->setObjectName("key8");
        key8->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key8->setFocusPolicy(Qt::NoFocus);
        key8->setReadOnly(true);
        key8->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key8);

        key9 = new QTextEdit(layoutWidget_3);
        key9->setObjectName("key9");
        key9->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key9->setFocusPolicy(Qt::NoFocus);
        key9->setReadOnly(true);
        key9->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key9);

        key0 = new QTextEdit(layoutWidget_3);
        key0->setObjectName("key0");
        key0->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key0->setFocusPolicy(Qt::NoFocus);
        key0->setReadOnly(true);
        key0->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(key0);

        keyMinus = new QTextEdit(layoutWidget_3);
        keyMinus->setObjectName("keyMinus");
        keyMinus->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyMinus->setFocusPolicy(Qt::NoFocus);
        keyMinus->setReadOnly(true);
        keyMinus->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(keyMinus);

        keyEqual = new QTextEdit(layoutWidget_3);
        keyEqual->setObjectName("keyEqual");
        keyEqual->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyEqual->setFocusPolicy(Qt::NoFocus);
        keyEqual->setReadOnly(true);
        keyEqual->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(keyEqual);

        keyShiftR = new QTextEdit(centralwidget);
        keyShiftR->setObjectName("keyShiftR");
        keyShiftR->setGeometry(QRect(950, 530, 191, 40));
        keyShiftR->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyShiftR->setFocusPolicy(Qt::NoFocus);
        keyShiftR->setTextInteractionFlags(Qt::NoTextInteraction);
        keyTab = new QTextEdit(centralwidget);
        keyTab->setObjectName("keyTab");
        keyTab->setGeometry(QRect(80, 430, 91, 41));
        keyTab->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyTab->setFocusPolicy(Qt::NoFocus);
        keyTab->setTextInteractionFlags(Qt::NoTextInteraction);
        keyCaps = new QTextEdit(centralwidget);
        keyCaps->setObjectName("keyCaps");
        keyCaps->setGeometry(QRect(80, 480, 121, 41));
        keyCaps->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyCaps->setFocusPolicy(Qt::NoFocus);
        keyCaps->setTextInteractionFlags(Qt::NoTextInteraction);
        keyShiftL = new QTextEdit(centralwidget);
        keyShiftL->setObjectName("keyShiftL");
        keyShiftL->setGeometry(QRect(80, 530, 141, 41));
        keyShiftL->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyShiftL->setFocusPolicy(Qt::NoFocus);
        keyShiftL->setTextInteractionFlags(Qt::NoTextInteraction);
        keySpace = new QTextEdit(centralwidget);
        keySpace->setObjectName("keySpace");
        keySpace->setGeometry(QRect(310, 590, 561, 40));
        keySpace->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keySpace->setFocusPolicy(Qt::NoFocus);
        keySpace->setTextInteractionFlags(Qt::NoTextInteraction);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(180, 430, 851, 41));
        layoutWidget1->setFocusPolicy(Qt::NoFocus);
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        keyQ = new QTextEdit(layoutWidget1);
        keyQ->setObjectName("keyQ");
        keyQ->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyQ->setFocusPolicy(Qt::NoFocus);
        keyQ->setReadOnly(true);
        keyQ->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyQ);

        keyW = new QTextEdit(layoutWidget1);
        keyW->setObjectName("keyW");
        keyW->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyW->setFocusPolicy(Qt::NoFocus);
        keyW->setReadOnly(true);
        keyW->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyW);

        keyE = new QTextEdit(layoutWidget1);
        keyE->setObjectName("keyE");
        keyE->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyE->setFocusPolicy(Qt::NoFocus);
        keyE->setReadOnly(true);
        keyE->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyE);

        keyR = new QTextEdit(layoutWidget1);
        keyR->setObjectName("keyR");
        keyR->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyR->setFocusPolicy(Qt::NoFocus);
        keyR->setReadOnly(true);
        keyR->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyR);

        keyT = new QTextEdit(layoutWidget1);
        keyT->setObjectName("keyT");
        keyT->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyT->setFocusPolicy(Qt::NoFocus);
        keyT->setReadOnly(true);
        keyT->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyT);

        keyY = new QTextEdit(layoutWidget1);
        keyY->setObjectName("keyY");
        keyY->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyY->setFocusPolicy(Qt::NoFocus);
        keyY->setReadOnly(true);
        keyY->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyY);

        keyU = new QTextEdit(layoutWidget1);
        keyU->setObjectName("keyU");
        keyU->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyU->setFocusPolicy(Qt::NoFocus);
        keyU->setReadOnly(true);
        keyU->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyU);

        keyI = new QTextEdit(layoutWidget1);
        keyI->setObjectName("keyI");
        keyI->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyI->setFocusPolicy(Qt::NoFocus);
        keyI->setReadOnly(true);
        keyI->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyI);

        keyO = new QTextEdit(layoutWidget1);
        keyO->setObjectName("keyO");
        keyO->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyO->setFocusPolicy(Qt::NoFocus);
        keyO->setReadOnly(true);
        keyO->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyO);

        keyP = new QTextEdit(layoutWidget1);
        keyP->setObjectName("keyP");
        keyP->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyP->setFocusPolicy(Qt::NoFocus);
        keyP->setReadOnly(true);
        keyP->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keyP);

        keySqrBrackL = new QTextEdit(layoutWidget1);
        keySqrBrackL->setObjectName("keySqrBrackL");
        keySqrBrackL->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keySqrBrackL->setFocusPolicy(Qt::NoFocus);
        keySqrBrackL->setReadOnly(true);
        keySqrBrackL->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keySqrBrackL);

        keySqrBrackR = new QTextEdit(layoutWidget1);
        keySqrBrackR->setObjectName("keySqrBrackR");
        keySqrBrackR->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keySqrBrackR->setFocusPolicy(Qt::NoFocus);
        keySqrBrackR->setReadOnly(true);
        keySqrBrackR->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(keySqrBrackR);

        horizontalLayout->setStretch(0, 40);
        horizontalLayout->setStretch(1, 40);
        horizontalLayout->setStretch(2, 40);
        horizontalLayout->setStretch(3, 40);
        horizontalLayout->setStretch(4, 40);
        horizontalLayout->setStretch(5, 40);
        horizontalLayout->setStretch(6, 40);
        horizontalLayout->setStretch(7, 40);
        horizontalLayout->setStretch(8, 40);
        horizontalLayout->setStretch(9, 40);
        horizontalLayout->setStretch(10, 40);
        horizontalLayout->setStretch(11, 40);
        taskText = new QTextEdit(centralwidget);
        taskText->setObjectName("taskText");
        taskText->setGeometry(QRect(140, 180, 921, 141));
        taskText->setFocusPolicy(Qt::NoFocus);
        taskText->setReadOnly(true);
        taskText->setTextInteractionFlags(Qt::NoTextInteraction);
        buttonOpenFile = new QPushButton(centralwidget);
        buttonOpenFile->setObjectName("buttonOpenFile");
        buttonOpenFile->setGeometry(QRect(20, 20, 161, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 30, 281, 31));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_5->addWidget(label);

        labelAccuracy = new QLabel(widget);
        labelAccuracy->setObjectName("labelAccuracy");

        horizontalLayout_5->addWidget(labelAccuracy);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(580, 30, 241, 20));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        labelCharsSec = new QLabel(widget1);
        labelCharsSec->setObjectName("labelCharsSec");

        horizontalLayout_6->addWidget(labelCharsSec);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        keyBackSpace->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">BACKSPACE</span></p></body></html>", nullptr));
        keyRevSlash->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; vertical-align:super;\">| </span><span style=\" font-size:16pt;\">\\</span></p></body></html>", nullptr));
        keyA->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">A</span></p></body></html>", nullptr));
        keyS->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">S</span></p></body></html>", nullptr));
        keyD->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">D</span></p></body></html>", nullptr));
        keyF->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">F</span></p></body></html>", nullptr));
        keyG->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">G</span></p></body></html>", nullptr));
        keyH->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">H</span></p></body></html>", nullptr));
        keyJ->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">J</span></p></body></html>", nullptr));
        keyK->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">K</span></p></body></html>", nullptr));
        keyL->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">L</span></p></body></html>", nullptr));
        keySemicolon->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; vertical-align:super;\">: </span><span style=\" font-size:16pt;\">;</span></p></body></html>", nullptr));
        keyQuote->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">&quot; </span><span style=\" font-size:18pt;\">' </span></p></body></html>", nullptr));
        keyEnter->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">ENTER</span></p></body></html>", nullptr));
        keyZ->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Z</span></p></body></html>", nullptr));
        keyX->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">X</span></p></body></html>", nullptr));
        keyC->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">C</span></p></body></html>", nullptr));
        keyV->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">V</span></p></body></html>", nullptr));
        keyB->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">B</span></p></body></html>", nullptr));
        keyN->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">N</span></p></body></html>", nullptr));
        keyM->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">M</span></p></body></html>", nullptr));
        keyComma->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">&lt;</span><span style=\" font-size:18pt;\"> ,</span></p></body></html>", nullptr));
        keyDot->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">&gt;</span><span style=\" font-size:18pt;\"> .</span></p></body></html>", nullptr));
        keySlash->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; vertical-align:super;\">? </span><span style=\" font-size:16pt;\">/</span></p></body></html>", nullptr));
        keyQuoteLeft->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">~ </span><span style=\" font-size:18pt;\">`</span></p></body></html>", nullptr));
        key1->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">!</span><span style=\" font-size:18pt;\"> 1</span></p></body></html>", nullptr));
        key2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">@</span><span style=\" font-size:18pt;\"> 2</span></p></body></html>", nullptr));
        key3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">#</span><span style=\" font-size:18pt;\"> 3</span></p></body></html>", nullptr));
        key4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">$</span><span style=\" font-size:18pt;\"> 4</span></p></body></html>", nullptr));
        key5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">%</span><span style=\" font-size:18pt;\"> 5</span></p></body></html>", nullptr));
        key6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">^</span><span style=\" font-size:18pt;\"> 6</span></p></body></html>", nullptr));
        key7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">&amp;</span><span style=\" font-size:18pt;\"> 7</span></p></body></html>", nullptr));
        key8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">*</span><span style=\" font-size:18pt;\"> 8</span></p></body></html>", nullptr));
        key9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; vertical-align:super;\">(  </span><span style=\" font-size:16pt;\">9</span></p></body></html>", nullptr));
        key0->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">)</span><span style=\" font-size:18pt;\"> 0</span></p></body></html>", nullptr));
        keyMinus->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">-</span><span style=\" font-size:18pt;\"> -</span></p></body></html>", nullptr));
        keyEqual->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">+</span><span style=\" font-size:18pt;\"> =</span></p></body></html>", nullptr));
        keyShiftR->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">SHIFT</span></p></body></html>", nullptr));
        keyTab->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">TAB</span></p></body></html>", nullptr));
        keyCaps->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">CAPS LOCK</span></p></body></html>", nullptr));
        keyShiftL->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">SHIFT</span></p></body></html>", nullptr));
        keySpace->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        keyQ->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Q</span></p></body></html>", nullptr));
        keyW->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">W</span></p></body></html>", nullptr));
        keyE->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">E</span></p></body></html>", nullptr));
        keyR->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">R</span></p></body></html>", nullptr));
        keyT->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">T</span></p></body></html>", nullptr));
        keyY->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Y</span></p></body></html>", nullptr));
        keyU->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">U</span></p></body></html>", nullptr));
        keyI->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">I</span></p></body></html>", nullptr));
        keyO->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">O</span></p></body></html>", nullptr));
        keyP->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">P</span></p></body></html>", nullptr));
        keySqrBrackL->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">{ </span><span style=\" font-size:18pt;\">[ </span></p></body></html>", nullptr));
        keySqrBrackR->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">} </span><span style=\" font-size:18pt;\">] </span></p></body></html>", nullptr));
        buttonOpenFile->setText(QCoreApplication::translate("MainWindow", "Open File with Text", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Accuracy: ", nullptr));
        labelAccuracy->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Chars/sec: ", nullptr));
        labelCharsSec->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
