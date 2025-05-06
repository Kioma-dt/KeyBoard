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
#include <QtWidgets/QComboBox>
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
    QTextEdit *keyBackSlash;
    QTextEdit *keyEnter;
    QTextEdit *keyShiftR;
    QTextEdit *keyTab;
    QTextEdit *keyCaps;
    QTextEdit *keyShiftL;
    QTextEdit *keySpace;
    QTextEdit *taskText;
    QPushButton *buttonOpenFile;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *labelAccuracy;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLabel *labelCharsPerSec;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLabel *labelWordsPerMin;
    QTextEdit *keyZ;
    QTextEdit *keyX;
    QTextEdit *keyC;
    QTextEdit *keyV;
    QTextEdit *keyB;
    QTextEdit *keyN;
    QTextEdit *keyM;
    QTextEdit *keyComma;
    QTextEdit *keyPeriod;
    QTextEdit *keySlash;
    QTextEdit *keyA;
    QTextEdit *keyS;
    QTextEdit *keyF;
    QTextEdit *keyD;
    QTextEdit *keyG;
    QTextEdit *keyH;
    QTextEdit *keyJ;
    QTextEdit *keyK;
    QTextEdit *keyL;
    QTextEdit *keySemicolon;
    QTextEdit *keyApostrophe;
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
    QTextEdit *keyBracketLeft;
    QTextEdit *keyBracketRight;
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
    QComboBox *comboBoxLanguage;
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
        keyBackSlash = new QTextEdit(centralwidget);
        keyBackSlash->setObjectName("keyBackSlash");
        keyBackSlash->setGeometry(QRect(1040, 430, 101, 39));
        keyBackSlash->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyBackSlash->setFocusPolicy(Qt::NoFocus);
        keyBackSlash->setReadOnly(true);
        keyBackSlash->setTextInteractionFlags(Qt::NoTextInteraction);
        keyEnter = new QTextEdit(centralwidget);
        keyEnter->setObjectName("keyEnter");
        keyEnter->setGeometry(QRect(990, 480, 151, 40));
        keyEnter->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyEnter->setFocusPolicy(Qt::NoFocus);
        keyEnter->setTextInteractionFlags(Qt::NoTextInteraction);
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
        taskText = new QTextEdit(centralwidget);
        taskText->setObjectName("taskText");
        taskText->setGeometry(QRect(140, 180, 921, 141));
        taskText->setFocusPolicy(Qt::NoFocus);
        taskText->setReadOnly(true);
        taskText->setTextInteractionFlags(Qt::NoTextInteraction);
        buttonOpenFile = new QPushButton(centralwidget);
        buttonOpenFile->setObjectName("buttonOpenFile");
        buttonOpenFile->setGeometry(QRect(20, 20, 161, 31));
        buttonOpenFile->setFocusPolicy(Qt::NoFocus);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(230, 30, 281, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_5->addWidget(label);

        labelAccuracy = new QLabel(layoutWidget);
        labelAccuracy->setObjectName("labelAccuracy");

        horizontalLayout_5->addWidget(labelAccuracy);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(580, 30, 241, 20));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        labelCharsPerSec = new QLabel(layoutWidget1);
        labelCharsPerSec->setObjectName("labelCharsPerSec");

        horizontalLayout_6->addWidget(labelCharsPerSec);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(900, 30, 271, 20));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");

        horizontalLayout_7->addWidget(label_3);

        labelWordsPerMin = new QLabel(layoutWidget2);
        labelWordsPerMin->setObjectName("labelWordsPerMin");

        horizontalLayout_7->addWidget(labelWordsPerMin);

        keyZ = new QTextEdit(centralwidget);
        keyZ->setObjectName("keyZ");
        keyZ->setGeometry(QRect(231, 531, 66, 39));
        keyZ->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyZ->setFocusPolicy(Qt::NoFocus);
        keyZ->setReadOnly(true);
        keyZ->setTextInteractionFlags(Qt::NoTextInteraction);
        keyX = new QTextEdit(centralwidget);
        keyX->setObjectName("keyX");
        keyX->setGeometry(QRect(303, 531, 65, 39));
        keyX->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyX->setFocusPolicy(Qt::NoFocus);
        keyX->setReadOnly(true);
        keyX->setTextInteractionFlags(Qt::NoTextInteraction);
        keyC = new QTextEdit(centralwidget);
        keyC->setObjectName("keyC");
        keyC->setGeometry(QRect(374, 531, 66, 39));
        keyC->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyC->setFocusPolicy(Qt::NoFocus);
        keyC->setReadOnly(true);
        keyC->setTextInteractionFlags(Qt::NoTextInteraction);
        keyV = new QTextEdit(centralwidget);
        keyV->setObjectName("keyV");
        keyV->setGeometry(QRect(446, 531, 65, 39));
        keyV->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyV->setFocusPolicy(Qt::NoFocus);
        keyV->setReadOnly(true);
        keyV->setTextInteractionFlags(Qt::NoTextInteraction);
        keyB = new QTextEdit(centralwidget);
        keyB->setObjectName("keyB");
        keyB->setGeometry(QRect(517, 531, 66, 39));
        keyB->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyB->setFocusPolicy(Qt::NoFocus);
        keyB->setReadOnly(true);
        keyB->setTextInteractionFlags(Qt::NoTextInteraction);
        keyN = new QTextEdit(centralwidget);
        keyN->setObjectName("keyN");
        keyN->setGeometry(QRect(589, 531, 65, 39));
        keyN->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyN->setFocusPolicy(Qt::NoFocus);
        keyN->setReadOnly(true);
        keyN->setTextInteractionFlags(Qt::NoTextInteraction);
        keyM = new QTextEdit(centralwidget);
        keyM->setObjectName("keyM");
        keyM->setGeometry(QRect(660, 531, 66, 39));
        keyM->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyM->setFocusPolicy(Qt::NoFocus);
        keyM->setReadOnly(true);
        keyM->setTextInteractionFlags(Qt::NoTextInteraction);
        keyComma = new QTextEdit(centralwidget);
        keyComma->setObjectName("keyComma");
        keyComma->setGeometry(QRect(732, 531, 65, 39));
        keyComma->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyComma->setFocusPolicy(Qt::NoFocus);
        keyComma->setReadOnly(true);
        keyComma->setTextInteractionFlags(Qt::NoTextInteraction);
        keyPeriod = new QTextEdit(centralwidget);
        keyPeriod->setObjectName("keyPeriod");
        keyPeriod->setGeometry(QRect(803, 531, 66, 39));
        keyPeriod->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyPeriod->setFocusPolicy(Qt::NoFocus);
        keyPeriod->setReadOnly(true);
        keyPeriod->setTextInteractionFlags(Qt::NoTextInteraction);
        keySlash = new QTextEdit(centralwidget);
        keySlash->setObjectName("keySlash");
        keySlash->setGeometry(QRect(875, 531, 65, 39));
        keySlash->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keySlash->setFocusPolicy(Qt::NoFocus);
        keySlash->setReadOnly(true);
        keySlash->setTextInteractionFlags(Qt::NoTextInteraction);
        keyA = new QTextEdit(centralwidget);
        keyA->setObjectName("keyA");
        keyA->setGeometry(QRect(211, 481, 65, 39));
        keyA->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyA->setFocusPolicy(Qt::NoFocus);
        keyA->setReadOnly(true);
        keyA->setTextInteractionFlags(Qt::NoTextInteraction);
        keyS = new QTextEdit(centralwidget);
        keyS->setObjectName("keyS");
        keyS->setGeometry(QRect(282, 481, 64, 39));
        keyS->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyS->setFocusPolicy(Qt::NoFocus);
        keyS->setReadOnly(true);
        keyS->setTextInteractionFlags(Qt::NoTextInteraction);
        keyF = new QTextEdit(centralwidget);
        keyF->setObjectName("keyF");
        keyF->setGeometry(QRect(423, 481, 64, 39));
        keyF->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyF->setFocusPolicy(Qt::NoFocus);
        keyF->setReadOnly(true);
        keyF->setTextInteractionFlags(Qt::NoTextInteraction);
        keyD = new QTextEdit(centralwidget);
        keyD->setObjectName("keyD");
        keyD->setGeometry(QRect(352, 481, 65, 39));
        keyD->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyD->setFocusPolicy(Qt::NoFocus);
        keyD->setReadOnly(true);
        keyD->setTextInteractionFlags(Qt::NoTextInteraction);
        keyG = new QTextEdit(centralwidget);
        keyG->setObjectName("keyG");
        keyG->setGeometry(QRect(493, 481, 65, 39));
        keyG->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyG->setFocusPolicy(Qt::NoFocus);
        keyG->setReadOnly(true);
        keyG->setTextInteractionFlags(Qt::NoTextInteraction);
        keyH = new QTextEdit(centralwidget);
        keyH->setObjectName("keyH");
        keyH->setGeometry(QRect(564, 481, 64, 39));
        keyH->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyH->setFocusPolicy(Qt::NoFocus);
        keyH->setReadOnly(true);
        keyH->setTextInteractionFlags(Qt::NoTextInteraction);
        keyJ = new QTextEdit(centralwidget);
        keyJ->setObjectName("keyJ");
        keyJ->setGeometry(QRect(634, 481, 65, 39));
        keyJ->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyJ->setFocusPolicy(Qt::NoFocus);
        keyJ->setReadOnly(true);
        keyJ->setTextInteractionFlags(Qt::NoTextInteraction);
        keyK = new QTextEdit(centralwidget);
        keyK->setObjectName("keyK");
        keyK->setGeometry(QRect(705, 481, 64, 39));
        keyK->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyK->setFocusPolicy(Qt::NoFocus);
        keyK->setReadOnly(true);
        keyK->setTextInteractionFlags(Qt::NoTextInteraction);
        keyL = new QTextEdit(centralwidget);
        keyL->setObjectName("keyL");
        keyL->setGeometry(QRect(775, 481, 65, 39));
        keyL->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyL->setFocusPolicy(Qt::NoFocus);
        keyL->setReadOnly(true);
        keyL->setTextInteractionFlags(Qt::NoTextInteraction);
        keySemicolon = new QTextEdit(centralwidget);
        keySemicolon->setObjectName("keySemicolon");
        keySemicolon->setGeometry(QRect(846, 481, 64, 39));
        keySemicolon->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keySemicolon->setFocusPolicy(Qt::NoFocus);
        keySemicolon->setReadOnly(true);
        keySemicolon->setTextInteractionFlags(Qt::NoTextInteraction);
        keyApostrophe = new QTextEdit(centralwidget);
        keyApostrophe->setObjectName("keyApostrophe");
        keyApostrophe->setGeometry(QRect(916, 481, 64, 39));
        keyApostrophe->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyApostrophe->setFocusPolicy(Qt::NoFocus);
        keyApostrophe->setReadOnly(true);
        keyApostrophe->setTextInteractionFlags(Qt::NoTextInteraction);
        keyQ = new QTextEdit(centralwidget);
        keyQ->setObjectName("keyQ");
        keyQ->setGeometry(QRect(181, 431, 66, 39));
        keyQ->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyQ->setFocusPolicy(Qt::NoFocus);
        keyQ->setReadOnly(true);
        keyQ->setTextInteractionFlags(Qt::NoTextInteraction);
        keyW = new QTextEdit(centralwidget);
        keyW->setObjectName("keyW");
        keyW->setGeometry(QRect(253, 431, 65, 39));
        keyW->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyW->setFocusPolicy(Qt::NoFocus);
        keyW->setReadOnly(true);
        keyW->setTextInteractionFlags(Qt::NoTextInteraction);
        keyE = new QTextEdit(centralwidget);
        keyE->setObjectName("keyE");
        keyE->setGeometry(QRect(324, 431, 65, 39));
        keyE->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyE->setFocusPolicy(Qt::NoFocus);
        keyE->setReadOnly(true);
        keyE->setTextInteractionFlags(Qt::NoTextInteraction);
        keyR = new QTextEdit(centralwidget);
        keyR->setObjectName("keyR");
        keyR->setGeometry(QRect(395, 431, 65, 39));
        keyR->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyR->setFocusPolicy(Qt::NoFocus);
        keyR->setReadOnly(true);
        keyR->setTextInteractionFlags(Qt::NoTextInteraction);
        keyT = new QTextEdit(centralwidget);
        keyT->setObjectName("keyT");
        keyT->setGeometry(QRect(466, 431, 66, 39));
        keyT->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyT->setFocusPolicy(Qt::NoFocus);
        keyT->setReadOnly(true);
        keyT->setTextInteractionFlags(Qt::NoTextInteraction);
        keyY = new QTextEdit(centralwidget);
        keyY->setObjectName("keyY");
        keyY->setGeometry(QRect(538, 431, 65, 39));
        keyY->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyY->setFocusPolicy(Qt::NoFocus);
        keyY->setReadOnly(true);
        keyY->setTextInteractionFlags(Qt::NoTextInteraction);
        keyU = new QTextEdit(centralwidget);
        keyU->setObjectName("keyU");
        keyU->setGeometry(QRect(609, 431, 65, 39));
        keyU->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyU->setFocusPolicy(Qt::NoFocus);
        keyU->setReadOnly(true);
        keyU->setTextInteractionFlags(Qt::NoTextInteraction);
        keyI = new QTextEdit(centralwidget);
        keyI->setObjectName("keyI");
        keyI->setGeometry(QRect(680, 431, 65, 39));
        keyI->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyI->setFocusPolicy(Qt::NoFocus);
        keyI->setReadOnly(true);
        keyI->setTextInteractionFlags(Qt::NoTextInteraction);
        keyO = new QTextEdit(centralwidget);
        keyO->setObjectName("keyO");
        keyO->setGeometry(QRect(751, 431, 66, 39));
        keyO->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyO->setFocusPolicy(Qt::NoFocus);
        keyO->setReadOnly(true);
        keyO->setTextInteractionFlags(Qt::NoTextInteraction);
        keyP = new QTextEdit(centralwidget);
        keyP->setObjectName("keyP");
        keyP->setGeometry(QRect(823, 431, 65, 39));
        keyP->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyP->setFocusPolicy(Qt::NoFocus);
        keyP->setReadOnly(true);
        keyP->setTextInteractionFlags(Qt::NoTextInteraction);
        keyBracketLeft = new QTextEdit(centralwidget);
        keyBracketLeft->setObjectName("keyBracketLeft");
        keyBracketLeft->setGeometry(QRect(894, 431, 65, 39));
        keyBracketLeft->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyBracketLeft->setFocusPolicy(Qt::NoFocus);
        keyBracketLeft->setReadOnly(true);
        keyBracketLeft->setTextInteractionFlags(Qt::NoTextInteraction);
        keyBracketRight = new QTextEdit(centralwidget);
        keyBracketRight->setObjectName("keyBracketRight");
        keyBracketRight->setGeometry(QRect(965, 431, 65, 39));
        keyBracketRight->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyBracketRight->setFocusPolicy(Qt::NoFocus);
        keyBracketRight->setReadOnly(true);
        keyBracketRight->setTextInteractionFlags(Qt::NoTextInteraction);
        keyQuoteLeft = new QTextEdit(centralwidget);
        keyQuoteLeft->setObjectName("keyQuoteLeft");
        keyQuoteLeft->setGeometry(QRect(81, 381, 65, 39));
        keyQuoteLeft->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyQuoteLeft->setFocusPolicy(Qt::NoFocus);
        keyQuoteLeft->setReadOnly(true);
        keyQuoteLeft->setTextInteractionFlags(Qt::NoTextInteraction);
        key1 = new QTextEdit(centralwidget);
        key1->setObjectName("key1");
        key1->setGeometry(QRect(152, 381, 64, 39));
        key1->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key1->setFocusPolicy(Qt::NoFocus);
        key1->setReadOnly(true);
        key1->setTextInteractionFlags(Qt::NoTextInteraction);
        key2 = new QTextEdit(centralwidget);
        key2->setObjectName("key2");
        key2->setGeometry(QRect(222, 381, 65, 39));
        key2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key2->setFocusPolicy(Qt::NoFocus);
        key2->setReadOnly(true);
        key2->setTextInteractionFlags(Qt::NoTextInteraction);
        key3 = new QTextEdit(centralwidget);
        key3->setObjectName("key3");
        key3->setGeometry(QRect(293, 381, 64, 39));
        key3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key3->setFocusPolicy(Qt::NoFocus);
        key3->setReadOnly(true);
        key3->setTextInteractionFlags(Qt::NoTextInteraction);
        key4 = new QTextEdit(centralwidget);
        key4->setObjectName("key4");
        key4->setGeometry(QRect(363, 381, 64, 39));
        key4->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key4->setFocusPolicy(Qt::NoFocus);
        key4->setReadOnly(true);
        key4->setTextInteractionFlags(Qt::NoTextInteraction);
        key5 = new QTextEdit(centralwidget);
        key5->setObjectName("key5");
        key5->setGeometry(QRect(433, 381, 65, 39));
        key5->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key5->setFocusPolicy(Qt::NoFocus);
        key5->setReadOnly(true);
        key5->setTextInteractionFlags(Qt::NoTextInteraction);
        key6 = new QTextEdit(centralwidget);
        key6->setObjectName("key6");
        key6->setGeometry(QRect(504, 381, 64, 39));
        key6->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key6->setFocusPolicy(Qt::NoFocus);
        key6->setReadOnly(true);
        key6->setTextInteractionFlags(Qt::NoTextInteraction);
        key7 = new QTextEdit(centralwidget);
        key7->setObjectName("key7");
        key7->setGeometry(QRect(574, 381, 65, 39));
        key7->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key7->setFocusPolicy(Qt::NoFocus);
        key7->setReadOnly(true);
        key7->setTextInteractionFlags(Qt::NoTextInteraction);
        key8 = new QTextEdit(centralwidget);
        key8->setObjectName("key8");
        key8->setGeometry(QRect(645, 381, 64, 39));
        key8->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key8->setFocusPolicy(Qt::NoFocus);
        key8->setReadOnly(true);
        key8->setTextInteractionFlags(Qt::NoTextInteraction);
        key9 = new QTextEdit(centralwidget);
        key9->setObjectName("key9");
        key9->setGeometry(QRect(715, 381, 64, 39));
        key9->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key9->setFocusPolicy(Qt::NoFocus);
        key9->setReadOnly(true);
        key9->setTextInteractionFlags(Qt::NoTextInteraction);
        key0 = new QTextEdit(centralwidget);
        key0->setObjectName("key0");
        key0->setGeometry(QRect(785, 381, 65, 39));
        key0->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        key0->setFocusPolicy(Qt::NoFocus);
        key0->setReadOnly(true);
        key0->setTextInteractionFlags(Qt::NoTextInteraction);
        keyMinus = new QTextEdit(centralwidget);
        keyMinus->setObjectName("keyMinus");
        keyMinus->setGeometry(QRect(856, 381, 64, 39));
        keyMinus->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyMinus->setFocusPolicy(Qt::NoFocus);
        keyMinus->setReadOnly(true);
        keyMinus->setTextInteractionFlags(Qt::NoTextInteraction);
        keyEqual = new QTextEdit(centralwidget);
        keyEqual->setObjectName("keyEqual");
        keyEqual->setGeometry(QRect(926, 381, 64, 39));
        keyEqual->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        keyEqual->setFocusPolicy(Qt::NoFocus);
        keyEqual->setReadOnly(true);
        keyEqual->setTextInteractionFlags(Qt::NoTextInteraction);
        comboBoxLanguage = new QComboBox(centralwidget);
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->setObjectName("comboBoxLanguage");
        comboBoxLanguage->setGeometry(QRect(20, 110, 101, 31));
        comboBoxLanguage->setFocusPolicy(Qt::NoFocus);
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
        keyBackSlash->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; vertical-align:super;\">| </span><span style=\" font-size:16pt;\">\\</span></p></body></html>", nullptr));
        keyEnter->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">ENTER</span></p></body></html>", nullptr));
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
        buttonOpenFile->setText(QCoreApplication::translate("MainWindow", "Open File with Text", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Accuracy: ", nullptr));
        labelAccuracy->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Chars/sec: ", nullptr));
        labelCharsPerSec->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Words/min", nullptr));
        labelWordsPerMin->setText(QString());
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
        keyPeriod->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        keyF->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">F</span></p></body></html>", nullptr));
        keyD->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">D</span></p></body></html>", nullptr));
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
        keyApostrophe->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">&quot; </span><span style=\" font-size:18pt;\">' </span></p></body></html>", nullptr));
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
        keyBracketLeft->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">{ </span><span style=\" font-size:18pt;\">[ </span></p></body></html>", nullptr));
        keyBracketRight->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; vertical-align:super;\">} </span><span style=\" font-size:18pt;\">] </span></p></body></html>", nullptr));
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
        comboBoxLanguage->setItemText(0, QCoreApplication::translate("MainWindow", "English", nullptr));
        comboBoxLanguage->setItemText(1, QCoreApplication::translate("MainWindow", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        comboBoxLanguage->setItemText(2, QCoreApplication::translate("MainWindow", "Deutsch", nullptr));
        comboBoxLanguage->setItemText(3, QCoreApplication::translate("MainWindow", "Fran\303\247ais", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
