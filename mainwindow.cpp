#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui_(new Ui::MainWindow) {
    ui_->setupUi(this);

    normalKey_ = QPalette();
    normalKey_.setColor(QPalette::Base, Qt::white);

    pressedKey_ = QPalette();
    pressedKey_.setColor(QPalette::Base, Qt::yellow);

    QFont font = QFont();
    font.setPointSize(fontSize_);
    ui_->userInput->setFont(font);
    ui_->userInput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    this->setFocusPolicy(Qt::StrongFocus);
    this->setFocus();
}

MainWindow::~MainWindow() {
    delete ui_;
}

void MainWindow::keyPressEvent(QKeyEvent* event) {
    QTextEdit* pressed = nullptr;

    switch (event->key()) {
        case Qt::Key_Q: {
            ui_->keyQ->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('Q');
            } else {
                userInput_.append('q');
            }
            pressed = ui_->keyQ;
            break;
        }
        case Qt::Key_W: {
            ui_->keyW->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('W');
            } else {
                userInput_.append('w');
            }
            pressed = ui_->keyW;
            break;
        }
        case Qt::Key_E: {
            ui_->keyE->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('E');
            } else {
                userInput_.append('e');
            }
            pressed = ui_->keyE;
            break;
        }
        case Qt::Key_R: {
            ui_->keyR->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('R');
            } else {
                userInput_.append('r');
            }
            pressed = ui_->keyR;
            break;
        }
        case Qt::Key_T: {
            ui_->keyT->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('T');
            } else {
                userInput_.append('t');
            }
            pressed = ui_->keyT;
            break;
        }
        case Qt::Key_Y: {
            ui_->keyY->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('Y');
            } else {
                userInput_.append('y');
            }
            pressed = ui_->keyY;
            break;
        }
        case Qt::Key_U: {
            ui_->keyU->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('U');
            } else {
                userInput_.append('u');
            }
            pressed = ui_->keyU;
            break;
        }
        case Qt::Key_I: {
            ui_->keyI->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('I');
            } else {
                userInput_.append('i');
            }
            pressed = ui_->keyI;
            break;
        }
        case Qt::Key_O: {
            ui_->keyO->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('O');
            } else {
                userInput_.append('o');
            }
            pressed = ui_->keyO;
            break;
        }
        case Qt::Key_P: {
            ui_->keyP->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('P');
            } else {
                userInput_.append('p');
            }
            pressed = ui_->keyP;
            break;
        }
        case Qt::Key_BraceLeft:
        case Qt::Key_BracketLeft: {
            ui_->keySqrBrackL->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('{');
            } else {
                userInput_.append('[');
            }
            pressed = ui_->keySqrBrackL;
            break;
        }
        case Qt::Key_BraceRight:
        case Qt::Key_BracketRight: {
            ui_->keySqrBrackR->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('}');
            } else {
                userInput_.append(']');
            }
            pressed = ui_->keySqrBrackR;
            break;
        }
        case Qt::Key_Bar:
        case Qt::Key_Backslash: {
            ui_->keyRevSlash->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('|');
            } else {
                userInput_.append('\\');
            }
            pressed = ui_->keyRevSlash;
            break;
        }
        case Qt::Key_A: {
            ui_->keyA->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('A');
            } else {
                userInput_.append('a');
            }
            pressed = ui_->keyA;
            break;
        }
        case Qt::Key_S: {
            ui_->keyS->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('S');
            } else {
                userInput_.append('s');
            }
            pressed = ui_->keyS;
            break;
        }
        case Qt::Key_D: {
            ui_->keyD->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('D');
            } else {
                userInput_.append('d');
            }
            pressed = ui_->keyD;
            break;
        }
        case Qt::Key_F: {
            ui_->keyF->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('F');
            } else {
                userInput_.append('f');
            }
            pressed = ui_->keyF;
            break;
        }
        case Qt::Key_G: {
            ui_->keyG->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('G');
            } else {
                userInput_.append('g');
            }
            pressed = ui_->keyG;
            break;
        }
        case Qt::Key_H: {
            ui_->keyH->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('H');
            } else {
                userInput_.append('h');
            }
            pressed = ui_->keyH;
            break;
        }
        case Qt::Key_J: {
            ui_->keyJ->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('J');
            } else {
                userInput_.append('j');
            }
            pressed = ui_->keyJ;
            break;
        }
        case Qt::Key_K: {
            ui_->keyK->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('K');
            } else {
                userInput_.append('k');
            }
            pressed = ui_->keyK;
            break;
        }
        case Qt::Key_L: {
            ui_->keyL->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('L');
            } else {
                userInput_.append('l');
            }
            pressed = ui_->keyL;
            break;
        }
        case Qt::Key_Colon:
        case Qt::Key_Semicolon: {
            ui_->keySemicolon->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append(':');
            } else {
                userInput_.append(';');
            }
            pressed = ui_->keySemicolon;
            break;
        }
        case Qt::Key_Apostrophe:
        case Qt::Key_QuoteDbl: {
            ui_->keyQuote->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('\"');
            } else {
                userInput_.append('\'');
            }
            pressed = ui_->keyQuote;
            break;
        }
        case Qt::Key_Return: {
            ui_->keyEnter->setPalette(pressedKey_);
            userInput_.append('\n');
            pressed = ui_->keyEnter;
            break;
        }
        case Qt::Key_Z: {
            ui_->keyZ->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('Z');
            } else {
                userInput_.append('z');
            }
            pressed = ui_->keyZ;
            break;
        }
        case Qt::Key_X: {
            ui_->keyX->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('X');
            } else {
                userInput_.append('x');
            }
            pressed = ui_->keyX;
            break;
        }
        case Qt::Key_C: {
            ui_->keyC->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('C');
            } else {
                userInput_.append('c');
            }
            pressed = ui_->keyC;
            break;
        }
        case Qt::Key_V: {
            ui_->keyV->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('V');
            } else {
                userInput_.append('v');
            }
            pressed = ui_->keyV;
            break;
        }
        case Qt::Key_B: {
            ui_->keyB->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('B');
            } else {
                userInput_.append('b');
            }
            pressed = ui_->keyB;
            break;
        }
        case Qt::Key_N: {
            ui_->keyN->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('N');
            } else {
                userInput_.append('n');
            }
            pressed = ui_->keyN;
            break;
        }
        case Qt::Key_M: {
            ui_->keyM->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier) ^ capsLock_) {
                userInput_.append('M');
            } else {
                userInput_.append('m');
            }
            pressed = ui_->keyM;
            break;
        }
        case Qt::Key_Less:
        case Qt::Key_Comma: {
            ui_->keyComma->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('<');
            } else {
                userInput_.append(',');
            }
            pressed = ui_->keyComma;
            break;
        }
        case Qt::Key_Greater:
        case Qt::Key_Period: {
            ui_->keyDot->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('>');
            } else {
                userInput_.append('.');
            }
            pressed = ui_->keyDot;
            break;
        }
        case Qt::Key_Slash:
        case Qt::Key_Question: {
            ui_->keySlash->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('?');
            } else {
                userInput_.append('/');
            }
            pressed = ui_->keySlash;
            break;
        }
        case Qt::Key_AsciiTilde:
        case Qt::Key_QuoteLeft: {
            ui_->keyQuoteLeft->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('~');
            } else {
                userInput_.append('`');
            }
            pressed = ui_->keyQuoteLeft;
            break;
        }
        case Qt::Key_Exclam:
        case Qt::Key_1: {
            ui_->key1->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('!');
            } else {
                userInput_.append('1');
            }
            pressed = ui_->key1;
            break;
        }
        case Qt::Key_At:
        case Qt::Key_2: {
            ui_->key2->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('@');
            } else {
                userInput_.append('2');
            }
            pressed = ui_->key2;
            break;
        }
        case Qt::Key_NumberSign:
        case Qt::Key_3: {
            ui_->key3->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('#');
            } else {
                userInput_.append('3');
            }
            pressed = ui_->key3;
            break;
        }
        case Qt::Key_Dollar:
        case Qt::Key_4: {
            ui_->key4->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('$');
            } else {
                userInput_.append('4');
            }
            pressed = ui_->key4;
            break;
        }
        case Qt::Key_Percent:
        case Qt::Key_5: {
            ui_->key5->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('%');
            } else {
                userInput_.append('5');
            }
            pressed = ui_->key5;
            break;
        }
        case Qt::Key_AsciiCircum:
        case Qt::Key_6: {
            ui_->key6->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('^');
            } else {
                userInput_.append('6');
            }
            pressed = ui_->key6;
            break;
        }
        case Qt::Key_Ampersand:
        case Qt::Key_7: {
            ui_->key7->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('&');
            } else {
                userInput_.append('7');
            }
            pressed = ui_->key7;
            break;
        }
        case Qt::Key_Asterisk:
        case Qt::Key_8: {
            ui_->key8->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('*');
            } else {
                userInput_.append('8');
            }
            pressed = ui_->key8;
            break;
        }
        case Qt::Key_ParenLeft:
        case Qt::Key_9: {
            ui_->key9->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('(');
            } else {
                userInput_.append('9');
            }
            pressed = ui_->key9;
            break;
        }
        case Qt::Key_ParenRight:
        case Qt::Key_0: {
            ui_->key0->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append(')');
            } else {
                userInput_.append('0');
            }
            pressed = ui_->key0;
            break;
        }
        case Qt::Key_Underscore:
        case Qt::Key_Minus: {
            ui_->keyMinus->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('_');
            } else {
                userInput_.append('-');
            }
            pressed = ui_->keyMinus;
            break;
        }
        case Qt::Key_Plus:
        case Qt::Key_Equal: {
            ui_->keyEqual->setPalette(pressedKey_);
            if (event->modifiers().testFlag(Qt::ShiftModifier)) {
                userInput_.append('+');
            } else {
                userInput_.append('=');
            }
            pressed = ui_->keyEqual;
            break;
        }
        case Qt::Key_Backspace: {
            ui_->keyBackSpace->setPalette(pressedKey_);
            userInput_.chop(1);
            pressed = ui_->keyBackSpace;
            break;
        }
        case Qt::Key_Shift: {
            ui_->keyShiftL->setPalette(pressedKey_);
            pressed = ui_->keyShiftL;
            break;
        }
        case Qt::Key_CapsLock: {
            ui_->keyCaps->setPalette(pressedKey_);
            capsLock_ = !capsLock_;
            pressed = ui_->keyCaps;
            break;
        }
        case Qt::Key_Space: {
            ui_->keySpace->setPalette(pressedKey_);
            userInput_.append(' ');
            pressed = ui_->keySpace;
            break;
        }
    }


    if (pressed != nullptr) {
        QTimer::singleShot(pressLatence_, [this, pressed]() {
            pressed->setPalette(normalKey_);
        });
        ui_->userInput->setText(userInput_);
        ui_->userInput->verticalScrollBar()->setValue(
            ui_->userInput->verticalScrollBar()->maximum());
    }
    this->setFocus();
}
