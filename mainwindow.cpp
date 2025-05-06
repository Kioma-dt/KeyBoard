#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui_(new Ui::MainWindow) {
    ui_->setupUi(this);

    winwindow_ = new WinWindow();
    winwindow_->setWindowTitle("WIN");

    normalKey_ = QPalette();
    normalKey_.setColor(QPalette::Base, Qt::white);

    pressedKey_ = QPalette();
    pressedKey_.setColor(QPalette::Base, Qt::yellow);

    normalInput_ = QPalette();
    normalInput_.setColor(QPalette::Base, Qt::white);
    normalInput_.setColor(QPalette::Text, Qt::black);

    errorInput_ = QPalette();
    errorInput_.setColor(QPalette::Base, Qt::yellow);
    errorInput_.setColor(QPalette::Text, Qt::red);

    QFont font = QFont();
    font.setPointSize(fontSize_);
    ui_->userInput->setFont(font);
    ui_->userInput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui_->userInput->setPalette(normalInput_);

    normalTaskText_ = QPalette();
    normalTaskText_.setColor(QPalette::Base, Qt::transparent);
    normalTaskText_.setColor(QPalette::Text, Qt::black);
    ui_->taskText->setPalette(normalTaskText_);
    ui_->taskText->setFont(font);

    this->setFocusPolicy(Qt::StrongFocus);
    this->setFocus();

    timerUpdateParametrs_ = new QTimer(this);
    connect(timerUpdateParametrs_, &QTimer::timeout, this,
            &MainWindow::UpdateParametrsSlot);

    this->clearParametrs();

    connect(ui_->buttonOpenFile, &QPushButton::clicked, this,
            &MainWindow::OpenFile);
    connect(winwindow_, &WinWindow::RepeatTheSame, this,
            &MainWindow::ClearInput);
    connect(winwindow_, &WinWindow::TryNew, this, &MainWindow::OpenFile);

    timerUpdateLanguage_ = new QTimer(this);
    connect(timerUpdateLanguage_, &QTimer::timeout, this,
            &MainWindow::UpdateLanguageSlot);
    timerUpdateLanguage_->start(hundread_);
    this->initLanguages();
    keysUpper_ = enKeysUpper_;
    keysLower_ = enKeysLower_;
    deadKey_ = deDeadKey_;
}

MainWindow::~MainWindow() {
    delete ui_;
}

void MainWindow::keyPressEvent(QKeyEvent* event) {
    QTextEdit* pressed = nullptr;
    QString key = event->text();

    if (deadKey_.contains(static_cast<Qt::Key>(event->key()))) {
        prevDeadKey_ = static_cast<Qt::Key>(event->key());
        key = deadKeyToText(prevDeadKey_);
    }

    if (key == keysUpper_.value(Qt::Key_Q) ||
        key == keysLower_.value(Qt::Key_Q)) {
        ui_->keyQ->setPalette(pressedKey_);
        pressed = ui_->keyQ;
    } else if (key == keysUpper_.value(Qt::Key_W) ||
               key == keysLower_.value(Qt::Key_W)) {
        ui_->keyW->setPalette(pressedKey_);
        pressed = ui_->keyW;
    } else if (key == keysUpper_.value(Qt::Key_E) ||
               key == keysLower_.value(Qt::Key_E)) {
        ui_->keyE->setPalette(pressedKey_);
        pressed = ui_->keyE;
    } else if (key == keysUpper_.value(Qt::Key_R) ||
               key == keysLower_.value(Qt::Key_R)) {
        ui_->keyR->setPalette(pressedKey_);
        pressed = ui_->keyR;
    } else if (key == keysUpper_.value(Qt::Key_T) ||
               key == keysLower_.value(Qt::Key_T)) {
        ui_->keyT->setPalette(pressedKey_);
        pressed = ui_->keyT;
    } else if (key == keysUpper_.value(Qt::Key_Y) ||
               key == keysLower_.value(Qt::Key_Y)) {
        ui_->keyY->setPalette(pressedKey_);
        pressed = ui_->keyY;
    } else if (key == keysUpper_.value(Qt::Key_U) ||
               key == keysLower_.value(Qt::Key_U)) {
        ui_->keyU->setPalette(pressedKey_);
        pressed = ui_->keyU;
    } else if (key == keysUpper_.value(Qt::Key_I) ||
               key == keysLower_.value(Qt::Key_I)) {
        ui_->keyI->setPalette(pressedKey_);
        pressed = ui_->keyI;
    } else if (key == keysUpper_.value(Qt::Key_O) ||
               key == keysLower_.value(Qt::Key_O)) {
        ui_->keyO->setPalette(pressedKey_);
        pressed = ui_->keyO;
    } else if (key == keysUpper_.value(Qt::Key_P) ||
               key == keysLower_.value(Qt::Key_P)) {
        ui_->keyP->setPalette(pressedKey_);
        pressed = ui_->keyP;
    } else if (key == keysUpper_.value(Qt::Key_BracketLeft) ||
               key == keysLower_.value(Qt::Key_BracketLeft)) {
        ui_->keyBracketLeft->setPalette(pressedKey_);
        pressed = ui_->keyBracketLeft;
    } else if (key == keysUpper_.value(Qt::Key_BracketRight) ||
               key == keysLower_.value(Qt::Key_BracketRight)) {
        ui_->keyBracketRight->setPalette(pressedKey_);
        pressed = ui_->keyBracketRight;
    } else if (key == keysUpper_.value(Qt::Key_Backslash) ||
               key == keysLower_.value(Qt::Key_Backslash)) {
        ui_->keyBackSlash->setPalette(pressedKey_);
        pressed = ui_->keyBackSlash;
    } else if (key == keysUpper_.value(Qt::Key_A) ||
               key == keysLower_.value(Qt::Key_A)) {
        ui_->keyA->setPalette(pressedKey_);
        pressed = ui_->keyA;
    } else if (key == keysUpper_.value(Qt::Key_S) ||
               key == keysLower_.value(Qt::Key_S)) {
        ui_->keyS->setPalette(pressedKey_);
        pressed = ui_->keyS;
    } else if (key == keysUpper_.value(Qt::Key_D) ||
               key == keysLower_.value(Qt::Key_D)) {
        ui_->keyD->setPalette(pressedKey_);
        pressed = ui_->keyD;
    } else if (key == keysUpper_.value(Qt::Key_F) ||
               key == keysLower_.value(Qt::Key_F)) {
        ui_->keyF->setPalette(pressedKey_);
        pressed = ui_->keyF;
    } else if (key == keysUpper_.value(Qt::Key_G) ||
               key == keysLower_.value(Qt::Key_G)) {
        ui_->keyG->setPalette(pressedKey_);
        pressed = ui_->keyG;
    } else if (key == keysUpper_.value(Qt::Key_H) ||
               key == keysLower_.value(Qt::Key_H)) {
        ui_->keyH->setPalette(pressedKey_);
        pressed = ui_->keyH;
    } else if (key == keysUpper_.value(Qt::Key_J) ||
               key == keysLower_.value(Qt::Key_J)) {
        ui_->keyJ->setPalette(pressedKey_);
        pressed = ui_->keyJ;
    } else if (key == keysUpper_.value(Qt::Key_K) ||
               key == keysLower_.value(Qt::Key_K)) {
        ui_->keyK->setPalette(pressedKey_);
        pressed = ui_->keyK;
    } else if (key == keysUpper_.value(Qt::Key_L) ||
               key == keysLower_.value(Qt::Key_L)) {
        ui_->keyL->setPalette(pressedKey_);
        pressed = ui_->keyL;
    } else if (key == keysUpper_.value(Qt::Key_Semicolon) ||
               key == keysLower_.value(Qt::Key_Semicolon)) {
        ui_->keySemicolon->setPalette(pressedKey_);
        pressed = ui_->keySemicolon;
    } else if (key == keysUpper_.value(Qt::Key_Apostrophe) ||
               key == keysLower_.value(Qt::Key_Apostrophe)) {
        ui_->keyApostrophe->setPalette(pressedKey_);
        pressed = ui_->keyApostrophe;
    } else if (key == keysUpper_.value(Qt::Key_Z) ||
               key == keysLower_.value(Qt::Key_Z)) {
        ui_->keyZ->setPalette(pressedKey_);
        pressed = ui_->keyZ;
    } else if (key == keysUpper_.value(Qt::Key_X) ||
               key == keysLower_.value(Qt::Key_X)) {
        ui_->keyX->setPalette(pressedKey_);
        pressed = ui_->keyX;
    } else if (key == keysUpper_.value(Qt::Key_C) ||
               key == keysLower_.value(Qt::Key_C)) {
        ui_->keyC->setPalette(pressedKey_);
        pressed = ui_->keyC;
    } else if (key == keysUpper_.value(Qt::Key_V) ||
               key == keysLower_.value(Qt::Key_V)) {
        ui_->keyV->setPalette(pressedKey_);
        pressed = ui_->keyV;
    } else if (key == keysUpper_.value(Qt::Key_B) ||
               key == keysLower_.value(Qt::Key_B)) {
        ui_->keyB->setPalette(pressedKey_);
        pressed = ui_->keyB;
    } else if (key == keysUpper_.value(Qt::Key_N) ||
               key == keysLower_.value(Qt::Key_N)) {
        ui_->keyN->setPalette(pressedKey_);
        pressed = ui_->keyN;
    } else if (key == keysUpper_.value(Qt::Key_M) ||
               key == keysLower_.value(Qt::Key_M)) {
        ui_->keyM->setPalette(pressedKey_);
        pressed = ui_->keyM;
    } else if (key == keysUpper_.value(Qt::Key_Comma) ||
               key == keysLower_.value(Qt::Key_Comma)) {
        ui_->keyComma->setPalette(pressedKey_);
        pressed = ui_->keyComma;
    } else if (key == keysUpper_.value(Qt::Key_Period) ||
               key == keysLower_.value(Qt::Key_Period)) {
        ui_->keyPeriod->setPalette(pressedKey_);
        pressed = ui_->keyPeriod;
    } else if (key == keysUpper_.value(Qt::Key_Slash) ||
               key == keysLower_.value(Qt::Key_Slash)) {
        ui_->keySlash->setPalette(pressedKey_);
        pressed = ui_->keySlash;
    } else if (key == keysUpper_.value(Qt::Key_QuoteLeft) ||
               key == keysLower_.value(Qt::Key_QuoteLeft)) {
        ui_->keyQuoteLeft->setPalette(pressedKey_);
        pressed = ui_->keyQuoteLeft;
    } else if (key == keysUpper_.value(Qt::Key_1) ||
               key == keysLower_.value(Qt::Key_1)) {
        ui_->key1->setPalette(pressedKey_);
        pressed = ui_->key1;
    } else if (key == keysUpper_.value(Qt::Key_2) ||
               key == keysLower_.value(Qt::Key_2)) {
        ui_->key2->setPalette(pressedKey_);
        pressed = ui_->key2;
    } else if (key == keysUpper_.value(Qt::Key_3) ||
               key == keysLower_.value(Qt::Key_3)) {
        ui_->key3->setPalette(pressedKey_);
        pressed = ui_->key3;
    } else if (key == keysUpper_.value(Qt::Key_4) ||
               key == keysLower_.value(Qt::Key_4)) {
        ui_->key4->setPalette(pressedKey_);
        pressed = ui_->key4;
    } else if (key == keysUpper_.value(Qt::Key_5) ||
               key == keysLower_.value(Qt::Key_5)) {
        ui_->key5->setPalette(pressedKey_);
        pressed = ui_->key5;
    } else if (key == keysUpper_.value(Qt::Key_6) ||
               key == keysLower_.value(Qt::Key_6)) {
        ui_->key6->setPalette(pressedKey_);
        pressed = ui_->key6;
    } else if (key == keysUpper_.value(Qt::Key_7) ||
               key == keysLower_.value(Qt::Key_7)) {
        ui_->key7->setPalette(pressedKey_);
        pressed = ui_->key7;
    } else if (key == keysUpper_.value(Qt::Key_8) ||
               key == keysLower_.value(Qt::Key_8)) {
        ui_->key8->setPalette(pressedKey_);
        pressed = ui_->key8;
    } else if (key == keysUpper_.value(Qt::Key_9) ||
               key == keysLower_.value(Qt::Key_9)) {
        ui_->key9->setPalette(pressedKey_);
        pressed = ui_->key9;
    } else if (key == keysUpper_.value(Qt::Key_0) ||
               key == keysLower_.value(Qt::Key_0)) {
        ui_->key0->setPalette(pressedKey_);
        pressed = ui_->key0;
    } else if (key == keysUpper_.value(Qt::Key_Minus) ||
               key == keysLower_.value(Qt::Key_Minus)) {
        ui_->keyMinus->setPalette(pressedKey_);
        pressed = ui_->keyMinus;
    } else if (key == keysUpper_.value(Qt::Key_Equal) ||
               key == keysLower_.value(Qt::Key_Equal)) {
        ui_->keyEqual->setPalette(pressedKey_);
        pressed = ui_->keyEqual;
    }

    else if (event->key() == Qt::Key_Backspace) {
        ui_->keyBackSpace->setPalette(pressedKey_);
        userInput_.chop(1);
        pressed = ui_->keyBackSpace;
    } else if (event->key() == Qt::Key_Shift) {
        ui_->keyShiftL->setPalette(pressedKey_);
        pressed = ui_->keyShiftL;
    } else if (event->key() == Qt::Key_CapsLock) {
        ui_->keyCaps->setPalette(pressedKey_);
        pressed = ui_->keyCaps;
    } else if (event->key() == Qt::Key_Space) {
        ui_->keySpace->setPalette(pressedKey_);
        pressed = ui_->keySpace;
    } else if (event->key() == Qt::Key_Return) {
        ui_->keyEnter->setPalette(pressedKey_);
        userInput_.append('\n');
        pressed = ui_->keyEnter;
    } else if (event->key() == Qt::Key_Tab) {
        ui_->keyTab->setPalette(pressedKey_);
        pressed = ui_->keyTab;
    }


    if (pressed != nullptr) {
        QTimer::singleShot(pressLatence_, [this, pressed]() {
            pressed->setPalette(normalKey_);
        });
        if (event->key() != Qt::Key_Shift) {
            if (prevDeadKey_ != Qt::Key_unknown && event->text() != "") {
                if (deadKey_[prevDeadKey_].contains(event->text())) {
                    userInput_.append(
                        deadKey_[prevDeadKey_].value(event->text()));
                } else {
                    userInput_.append(event->text());
                }
                prevDeadKey_ = Qt::Key_unknown;
            } else if (event->key() != Qt::Key_Backspace &&
                       event->key() != Qt::Key_Return) {
                userInput_.append(event->text());
            }
            ui_->userInput->setText(userInput_);
            ui_->userInput->verticalScrollBar()->setValue(
                ui_->userInput->verticalScrollBar()->maximum());
            inputedCharacters_++;
            this->checkInput();
        }
    }
    this->setFocus();
}

QTextEdit* MainWindow::keyToUi(Qt::Key key) {


    switch (key) {
        case Qt::Key_Q:
            return ui_->keyQ;
        case Qt::Key_W:
            return ui_->keyW;
        case Qt::Key_E:
            return ui_->keyE;
        case Qt::Key_R:
            return ui_->keyR;
        case Qt::Key_T:
            return ui_->keyT;
        case Qt::Key_Y:
            return ui_->keyY;
        case Qt::Key_U:
            return ui_->keyU;
        case Qt::Key_I:
            return ui_->keyI;
        case Qt::Key_O:
            return ui_->keyO;
        case Qt::Key_P:
            return ui_->keyP;
        case Qt::Key_A:
            return ui_->keyA;
        case Qt::Key_S:
            return ui_->keyS;
        case Qt::Key_D:
            return ui_->keyD;
        case Qt::Key_F:
            return ui_->keyF;
        case Qt::Key_G:
            return ui_->keyG;
        case Qt::Key_H:
            return ui_->keyH;
        case Qt::Key_J:
            return ui_->keyJ;
        case Qt::Key_K:
            return ui_->keyK;
        case Qt::Key_L:
            return ui_->keyL;
        case Qt::Key_Z:
            return ui_->keyZ;
        case Qt::Key_X:
            return ui_->keyX;
        case Qt::Key_C:
            return ui_->keyC;
        case Qt::Key_V:
            return ui_->keyV;
        case Qt::Key_B:
            return ui_->keyB;
        case Qt::Key_N:
            return ui_->keyN;
        case Qt::Key_M:
            return ui_->keyM;
        case Qt::Key_1:
            return ui_->key1;
        case Qt::Key_2:
            return ui_->key2;
        case Qt::Key_3:
            return ui_->key3;
        case Qt::Key_4:
            return ui_->key4;
        case Qt::Key_5:
            return ui_->key5;
        case Qt::Key_6:
            return ui_->key6;
        case Qt::Key_7:
            return ui_->key7;
        case Qt::Key_8:
            return ui_->key8;
        case Qt::Key_9:
            return ui_->key9;
        case Qt::Key_0:
            return ui_->key0;
        case Qt::Key_Minus:
            return ui_->keyMinus;
        case Qt::Key_Equal:
            return ui_->keyEqual;
        case Qt::Key_BracketLeft:
            return ui_->keyBracketLeft;
        case Qt::Key_BracketRight:
            return ui_->keyBracketRight;
        case Qt::Key_Backslash:
            return ui_->keyBackSlash;
        case Qt::Key_Semicolon:
            return ui_->keySemicolon;
        case Qt::Key_Apostrophe:
            return ui_->keyApostrophe;
        case Qt::Key_Comma:
            return ui_->keyComma;
        case Qt::Key_Period:
            return ui_->keyPeriod;
        case Qt::Key_Slash:
            return ui_->keySlash;
        case Qt::Key_QuoteLeft:
            return ui_->keyQuoteLeft;
        default:
            return nullptr;
    }
}

QString MainWindow::deadKeyToText(Qt::Key key) {


    switch (key) {
        case Qt::Key_Dead_Circumflex:
            return "^";
        case Qt::Key_Dead_Diaeresis:
            return "\"";
        case Qt::Key_Dead_Grave:
            return "`";
        case Qt::Key_Dead_Acute:
            return "´";
        case Qt::Key_Dead_Tilde:
            return "~";
        default:
            return "";
    }
}

void MainWindow::changeTaskText(const QString& newText) {
    taskText_ = newText;
    ui_->taskText->setText(taskText_);
    ui_->taskText->setPalette(normalTaskText_);
}

void MainWindow::checkInput() {
    int right_characters = 0;

    for (; right_characters < userInput_.size() &&
           right_characters < taskText_.size();
         right_characters++) {


        if (userInput_[right_characters] != taskText_[right_characters]) {
            break;
        }
    }

    ui_->taskText->setText(taskText_.mid(right_characters));

    if (right_characters == taskText_.size() && taskText_.size() != 0) {
        timerUpdateParametrs_->stop();
        winwindow_->setWindowModality(Qt::ApplicationModal);
        winwindow_->show();
    }

    if (right_characters < userInput_.size() &&
        right_characters < taskText_.size()) {
        ui_->userInput->setPalette(errorInput_);
        wrongCharacters_++;
    } else {
        ui_->userInput->setPalette(normalInput_);
        rightCharacters_++;
        if (userInput_.endsWith(' ') && userInput_.size() > 1 &&
            userInput_[userInput_.size() - 2] != ' ') {
            inputedWords_++;
        }
        if (userInput_.endsWith('\n')) {
            this->fixParametrs();
        }
    }
}

void MainWindow::fixParametrs() {


    if (previousAccuracy_ < 0) {
        previousAccuracy_ = rightCharacters_ /
                            (wrongCharacters_ + rightCharacters_) * hundread_;
    }
    previousAccuracy_ =
        (previousAccuracy_ +
         rightCharacters_ / (wrongCharacters_ + rightCharacters_) * hundread_) /
        2;
    rightCharacters_ = 1;
    wrongCharacters_ = 0;
    ui_->labelAccuracy->setText("100% / " + QString::number(previousAccuracy_) +
                                '%');


    if (previousCharsPerSec_ < 0) {
        previousCharsPerSec_ = inputedCharacters_ / ellapsedSeconds_;
    }
    previousCharsPerSec_ =
        (previousCharsPerSec_ + inputedCharacters_ / ellapsedSeconds_) / 2;
    inputedCharacters_ = 0;
    ui_->labelCharsPerSec->setText("0 / " +
                                   QString::number(previousCharsPerSec_));


    if (previousWordsPerMin_ < 0) {
        previousWordsPerMin_ =
            inputedWords_ / ellapsedSeconds_ * secondsInMinute_;
    }
    previousWordsPerMin_ =
        (previousWordsPerMin_ +
         inputedWords_ / ellapsedSeconds_ * secondsInMinute_) /
        2;
    inputedWords_ = 0;
    ui_->labelWordsPerMin->setText("0 / " +
                                   QString::number(previousWordsPerMin_));

    ellapsedSeconds_ = 0;
}

void MainWindow::clearParametrs() {
    rightCharacters_ = 1;
    wrongCharacters_ = 0;
    previousAccuracy_ = -1;
    ui_->labelAccuracy->setText("100% / -1");

    inputedCharacters_ = 0;
    previousCharsPerSec_ = -1;
    ui_->labelCharsPerSec->setText("0 / -1");

    inputedWords_ = 0;
    previousWordsPerMin_ = -1;
    ui_->labelWordsPerMin->setText("0 / -1");
}

void MainWindow::initLanguages() {
    enKeysUpper_ = QHash<Qt::Key, QString>{
        {Qt::Key_Q, "Q"},			{Qt::Key_W, "W"},
        {Qt::Key_E, "E"},			{Qt::Key_R, "R"},
        {Qt::Key_T, "T"},			{Qt::Key_Y, "Y"},
        {Qt::Key_U, "U"},			{Qt::Key_I, "I"},
        {Qt::Key_O, "O"},			{Qt::Key_P, "P"},
        {Qt::Key_BracketLeft, "{"}, {Qt::Key_BracketRight, "}"},
        {Qt::Key_Backslash, "|"},	{Qt::Key_A, "A"},
        {Qt::Key_S, "S"},			{Qt::Key_D, "D"},
        {Qt::Key_F, "F"},			{Qt::Key_G, "G"},
        {Qt::Key_H, "H"},			{Qt::Key_J, "J"},
        {Qt::Key_K, "K"},			{Qt::Key_L, "L"},
        {Qt::Key_Semicolon, ":"},	{Qt::Key_Apostrophe, "\""},
        {Qt::Key_Z, "Z"},			{Qt::Key_X, "X"},
        {Qt::Key_C, "C"},			{Qt::Key_V, "V"},
        {Qt::Key_B, "B"},			{Qt::Key_N, "N"},
        {Qt::Key_M, "M"},			{Qt::Key_Comma, "<"},
        {Qt::Key_Period, ">"},		{Qt::Key_Slash, "?"},
        {Qt::Key_QuoteLeft, "~"},	{Qt::Key_1, "!"},
        {Qt::Key_2, "@"},			{Qt::Key_3, "#"},
        {Qt::Key_4, "$"},			{Qt::Key_5, "%"},
        {Qt::Key_6, "^"},			{Qt::Key_7, "&"},
        {Qt::Key_8, "*"},			{Qt::Key_9, "("},
        {Qt::Key_0, ")"},			{Qt::Key_Minus, "_"},
        {Qt::Key_Equal, "+"}};
    enKeysLower_ = QHash<Qt::Key, QString>{
        {Qt::Key_1, "1"},
        {Qt::Key_2, "2"},
        {Qt::Key_3, "3"},
        {Qt::Key_4, "4"},
        {Qt::Key_5, "5"},
        {Qt::Key_6, "6"},
        {Qt::Key_7, "7"},
        {Qt::Key_8, "8"},
        {Qt::Key_9, "9"},
        {Qt::Key_0, "0"},
        {Qt::Key_Minus, "-"},
        {Qt::Key_Equal, "="},

        {Qt::Key_QuoteLeft, "`"},
        {Qt::Key_BracketLeft, "["},
        {Qt::Key_BracketRight, "]"},
        {Qt::Key_Backslash, "\\"},

        {Qt::Key_Q, "q"},
        {Qt::Key_W, "w"},
        {Qt::Key_E, "e"},
        {Qt::Key_R, "r"},
        {Qt::Key_T, "t"},
        {Qt::Key_Y, "y"},
        {Qt::Key_U, "u"},
        {Qt::Key_I, "i"},
        {Qt::Key_O, "o"},
        {Qt::Key_P, "p"},
        {Qt::Key_A, "a"},
        {Qt::Key_S, "s"},
        {Qt::Key_D, "d"},
        {Qt::Key_F, "f"},
        {Qt::Key_G, "g"},
        {Qt::Key_H, "h"},
        {Qt::Key_J, "j"},
        {Qt::Key_K, "k"},
        {Qt::Key_L, "l"},
        {Qt::Key_Z, "z"},
        {Qt::Key_X, "x"},
        {Qt::Key_C, "c"},
        {Qt::Key_V, "v"},
        {Qt::Key_B, "b"},
        {Qt::Key_N, "n"},
        {Qt::Key_M, "m"},

        {Qt::Key_Semicolon, ";"},
        {Qt::Key_Apostrophe, "'"},
        {Qt::Key_Comma, ","},
        {Qt::Key_Period, "."},
        {Qt::Key_Slash, "/"},
    };

    ruKeysUpper_ = QHash<Qt::Key, QString>{
        {Qt::Key_Q, "Й"},			{Qt::Key_W, "Ц"},
        {Qt::Key_E, "У"},			{Qt::Key_R, "К"},
        {Qt::Key_T, "Е"},			{Qt::Key_Y, "Н"},
        {Qt::Key_U, "Г"},			{Qt::Key_I, "Ш"},
        {Qt::Key_O, "Щ"},			{Qt::Key_P, "З"},
        {Qt::Key_BracketLeft, "Х"}, {Qt::Key_BracketRight, "Ъ"},
        {Qt::Key_Backslash, "/"},	{Qt::Key_A, "Ф"},
        {Qt::Key_S, "Ы"},			{Qt::Key_D, "В"},
        {Qt::Key_F, "А"},			{Qt::Key_G, "П"},
        {Qt::Key_H, "Р"},			{Qt::Key_J, "О"},
        {Qt::Key_K, "Л"},			{Qt::Key_L, "Д"},
        {Qt::Key_Semicolon, "Ж"},	{Qt::Key_Apostrophe, "Э"},
        {Qt::Key_Z, "Я"},			{Qt::Key_X, "Ч"},
        {Qt::Key_C, "С"},			{Qt::Key_V, "М"},
        {Qt::Key_B, "И"},			{Qt::Key_N, "Т"},
        {Qt::Key_M, "Ь"},			{Qt::Key_Comma, "Б"},
        {Qt::Key_Period, "Ю"},		{Qt::Key_Slash, ","},
        {Qt::Key_QuoteLeft, "Ё"},	{Qt::Key_1, "!"},
        {Qt::Key_2, "\""},			{Qt::Key_3, "№"},
        {Qt::Key_4, ";"},			{Qt::Key_5, "%"},
        {Qt::Key_6, ":"},			{Qt::Key_7, "?"},
        {Qt::Key_8, "*"},			{Qt::Key_9, "("},
        {Qt::Key_0, ")"},			{Qt::Key_Minus, "_"},
        {Qt::Key_Equal, "+"}};
    ruKeysLower_ = QHash<Qt::Key, QString>{{Qt::Key_1, "1"},
                                           {Qt::Key_2, "2"},
                                           {Qt::Key_3, "3"},
                                           {Qt::Key_4, "4"},
                                           {Qt::Key_5, "5"},
                                           {Qt::Key_6, "6"},
                                           {Qt::Key_7, "7"},
                                           {Qt::Key_8, "8"},
                                           {Qt::Key_9, "9"},
                                           {Qt::Key_0, "0"},
                                           {Qt::Key_Minus, "-"},
                                           {Qt::Key_Equal, "="},

                                           {Qt::Key_QuoteLeft, "ё"},
                                           {Qt::Key_BracketLeft, "х"},
                                           {Qt::Key_BracketRight, "ъ"},
                                           {Qt::Key_Backslash, "\\"},

                                           {Qt::Key_Q, "й"},
                                           {Qt::Key_W, "ц"},
                                           {Qt::Key_E, "у"},
                                           {Qt::Key_R, "к"},
                                           {Qt::Key_T, "е"},
                                           {Qt::Key_Y, "н"},
                                           {Qt::Key_U, "г"},
                                           {Qt::Key_I, "ш"},
                                           {Qt::Key_O, "щ"},
                                           {Qt::Key_P, "з"},
                                           {Qt::Key_A, "ф"},
                                           {Qt::Key_S, "ы"},
                                           {Qt::Key_D, "в"},
                                           {Qt::Key_F, "а"},
                                           {Qt::Key_G, "п"},
                                           {Qt::Key_H, "р"},
                                           {Qt::Key_J, "о"},
                                           {Qt::Key_K, "л"},
                                           {Qt::Key_L, "д"},
                                           {Qt::Key_Semicolon, "ж"},
                                           {Qt::Key_Apostrophe, "э"},
                                           {Qt::Key_Z, "я"},
                                           {Qt::Key_X, "ч"},
                                           {Qt::Key_C, "с"},
                                           {Qt::Key_V, "м"},
                                           {Qt::Key_B, "и"},
                                           {Qt::Key_N, "т"},
                                           {Qt::Key_M, "ь"},
                                           {Qt::Key_Comma, "б"},
                                           {Qt::Key_Period, "ю"},
                                           {Qt::Key_Slash, "."}};

    deKeysUpper_ = QHash<Qt::Key, QString>{
        {Qt::Key_Q, "Q"},			{Qt::Key_W, "W"},
        {Qt::Key_E, "E"},			{Qt::Key_R, "R"},
        {Qt::Key_T, "T"},			{Qt::Key_Y, "Z"},
        {Qt::Key_U, "U"},			{Qt::Key_I, "I"},
        {Qt::Key_O, "O"},			{Qt::Key_P, "P"},
        {Qt::Key_BracketLeft, "Ü"}, {Qt::Key_BracketRight, "*"},
        {Qt::Key_Backslash, "'"},	{Qt::Key_A, "A"},
        {Qt::Key_S, "S"},			{Qt::Key_D, "D"},
        {Qt::Key_F, "F"},			{Qt::Key_G, "G"},
        {Qt::Key_H, "H"},			{Qt::Key_J, "J"},
        {Qt::Key_K, "K"},			{Qt::Key_L, "L"},
        {Qt::Key_Semicolon, "Ö"},	{Qt::Key_Apostrophe, "Ä"},
        {Qt::Key_Z, "Y"},			{Qt::Key_X, "X"},
        {Qt::Key_C, "C"},			{Qt::Key_V, "V"},
        {Qt::Key_B, "B"},			{Qt::Key_N, "N"},
        {Qt::Key_M, "M"},			{Qt::Key_Comma, ";"},
        {Qt::Key_Period, ":"},		{Qt::Key_Slash, "_"},
        {Qt::Key_QuoteLeft, "°"},

        {Qt::Key_1, "!"},			{Qt::Key_2, "\""},
        {Qt::Key_3, "§"},			{Qt::Key_4, "$"},
        {Qt::Key_5, "%"},			{Qt::Key_6, "&"},
        {Qt::Key_7, "/"},			{Qt::Key_8, "("},
        {Qt::Key_9, ")"},			{Qt::Key_0, "="},
        {Qt::Key_Minus, "?"},		{Qt::Key_Equal, "`"}};

    deKeysLower_ = QHash<Qt::Key, QString>{
        {Qt::Key_Q, "q"},			{Qt::Key_W, "w"},
        {Qt::Key_E, "e"},			{Qt::Key_R, "r"},
        {Qt::Key_T, "t"},			{Qt::Key_Y, "z"},
        {Qt::Key_U, "u"},			{Qt::Key_I, "i"},
        {Qt::Key_O, "o"},			{Qt::Key_P, "p"},
        {Qt::Key_BracketLeft, "ü"}, {Qt::Key_BracketRight, "+"},
        {Qt::Key_Backslash, "#"},	{Qt::Key_A, "a"},
        {Qt::Key_S, "s"},			{Qt::Key_D, "d"},
        {Qt::Key_F, "f"},			{Qt::Key_G, "g"},
        {Qt::Key_H, "h"},			{Qt::Key_J, "j"},
        {Qt::Key_K, "k"},			{Qt::Key_L, "l"},
        {Qt::Key_Semicolon, "ö"},	{Qt::Key_Apostrophe, "ä"},
        {Qt::Key_Z, "y"},			{Qt::Key_X, "x"},
        {Qt::Key_C, "c"},			{Qt::Key_V, "v"},
        {Qt::Key_B, "b"},			{Qt::Key_N, "n"},
        {Qt::Key_M, "m"},			{Qt::Key_Comma, ","},
        {Qt::Key_Period, "."},		{Qt::Key_Slash, "-"},
        {Qt::Key_QuoteLeft, "^"},

        {Qt::Key_1, "1"},			{Qt::Key_2, "2"},
        {Qt::Key_3, "3"},			{Qt::Key_4, "4"},
        {Qt::Key_5, "5"},			{Qt::Key_6, "6"},
        {Qt::Key_7, "7"},			{Qt::Key_8, "8"},
        {Qt::Key_9, "9"},			{Qt::Key_0, "0"},
        {Qt::Key_Minus, "ß"},		{Qt::Key_Equal, "´"}};

    deDeadKey_ = {{Qt::Key_Dead_Circumflex,
                   {{"j", "ĵ"},
                    {"a", "â"},
                    {"e", "ê"},
                    {"i", "î"},
                    {"o", "ô"},
                    {"u", "û"},
                    {"J", "Ĵ"},
                    {"A", "Â"},
                    {"E", "Ê"},
                    {"I", "Î"},
                    {"O", "Ô"},
                    {"U", "Û"}}},
                  {Qt::Key_Dead_Diaeresis,
                   {{"a", "ä"},
                    {"o", "ö"},
                    {"u", "ü"},
                    {"A", "Ä"},
                    {"O", "Ö"},
                    {"U", "Ü"},
                    {"e", "ë"},
                    {"i", "ï"},
                    {"y", "ÿ"},
                    {"E", "Ë"},
                    {"I", "Ï"},
                    {"Y", "Ÿ"}}},
                  {Qt::Key_Dead_Grave,
                   {{"a", "à"},
                    {"e", "è"},
                    {"i", "ì"},
                    {"o", "ò"},
                    {"u", "ù"},
                    {"A", "À"},
                    {"E", "È"},
                    {"I", "Ì"},
                    {"O", "Ò"},
                    {"U", "Ù"}}},
                  {Qt::Key_Dead_Acute,
                   {{"j", "j́"},
                    {"a", "á"},
                    {"e", "é"},
                    {"i", "í"},
                    {"o", "ó"},
                    {"u", "ú"},
                    {"y", "ý"},
                    {"J", "J́"},
                    {"A", "Á"},
                    {"E", "É"},
                    {"I", "Í"},
                    {"O", "Ó"},
                    {"U", "Ú"},
                    {"Y", "Ý"}}},
                  {Qt::Key_Dead_Tilde,
                   {{"a", "ã"},
                    {"o", "õ"},
                    {"n", "ñ"},
                    {"A", "Ã"},
                    {"O", "Õ"},
                    {"N", "Ñ"}}}};

    frKeysUpper_ = QHash<Qt::Key, QString>{{Qt::Key_A, "Q"},
                                           {Qt::Key_Z, "W"},
                                           {Qt::Key_E, "E"},
                                           {Qt::Key_R, "R"},
                                           {Qt::Key_T, "T"},
                                           {Qt::Key_Y, "Y"},
                                           {Qt::Key_U, "U"},
                                           {Qt::Key_I, "I"},
                                           {Qt::Key_O, "O"},
                                           {Qt::Key_P, "P"},
                                           {Qt::Key_Q, "A"},
                                           {Qt::Key_S, "S"},
                                           {Qt::Key_D, "D"},
                                           {Qt::Key_F, "F"},
                                           {Qt::Key_G, "G"},
                                           {Qt::Key_H, "H"},
                                           {Qt::Key_J, "J"},
                                           {Qt::Key_K, "K"},
                                           {Qt::Key_L, "L"},
                                           {Qt::Key_M, "M"},
                                           {Qt::Key_W, "Z"},
                                           {Qt::Key_X, "X"},
                                           {Qt::Key_C, "C"},
                                           {Qt::Key_V, "V"},
                                           {Qt::Key_B, "B"},
                                           {Qt::Key_N, "N"},

                                           {Qt::Key_1, "1"},
                                           {Qt::Key_2, "2"},
                                           {Qt::Key_3, "3"},
                                           {Qt::Key_4, "4"},
                                           {Qt::Key_5, "5"},
                                           {Qt::Key_6, "6"},
                                           {Qt::Key_7, "7"},
                                           {Qt::Key_8, "8"},
                                           {Qt::Key_9, "9"},
                                           {Qt::Key_0, "0"},
                                           {Qt::Key_Equal, "+"},
                                           {Qt::Key_Minus, "°"},

                                           {Qt::Key_QuoteLeft, "~"},
                                           {Qt::Key_BracketLeft, "¨"},
                                           {Qt::Key_BracketRight, "£"},
                                           {Qt::Key_Backslash, "µ"},

                                           {Qt::Key_Semicolon, "M"},
                                           {Qt::Key_Apostrophe, "%"},
                                           {Qt::Key_Comma, "?"},
                                           {Qt::Key_Period, "."},
                                           {Qt::Key_Slash, "/"}};

    frKeysLower_ = QHash<Qt::Key, QString>{{Qt::Key_A, "q"},
                                           {Qt::Key_Z, "w"},
                                           {Qt::Key_E, "e"},
                                           {Qt::Key_R, "r"},
                                           {Qt::Key_T, "t"},
                                           {Qt::Key_Y, "y"},
                                           {Qt::Key_U, "u"},
                                           {Qt::Key_I, "i"},
                                           {Qt::Key_O, "o"},
                                           {Qt::Key_P, "p"},
                                           {Qt::Key_Q, "a"},
                                           {Qt::Key_S, "s"},
                                           {Qt::Key_D, "d"},
                                           {Qt::Key_F, "f"},
                                           {Qt::Key_G, "g"},
                                           {Qt::Key_H, "h"},
                                           {Qt::Key_J, "j"},
                                           {Qt::Key_K, "k"},
                                           {Qt::Key_L, "l"},
                                           {Qt::Key_M, "m"},
                                           {Qt::Key_W, "z"},
                                           {Qt::Key_X, "x"},
                                           {Qt::Key_C, "c"},
                                           {Qt::Key_V, "v"},
                                           {Qt::Key_B, "b"},
                                           {Qt::Key_N, "n"},

                                           {Qt::Key_1, "&"},
                                           {Qt::Key_2, "é"},
                                           {Qt::Key_3, "\""},
                                           {Qt::Key_4, "'"},
                                           {Qt::Key_5, "("},
                                           {Qt::Key_6, "-"},
                                           {Qt::Key_7, "è"},
                                           {Qt::Key_8, "_"},
                                           {Qt::Key_9, "ç"},
                                           {Qt::Key_0, "à"},
                                           {Qt::Key_Minus, ")"},
                                           {Qt::Key_Equal, "="},

                                           {Qt::Key_QuoteLeft, "²"},
                                           {Qt::Key_BracketLeft, "^"},
                                           {Qt::Key_BracketRight, "$"},
                                           {Qt::Key_Backslash, "*"},

                                           {Qt::Key_Semicolon, "m"},
                                           {Qt::Key_Apostrophe, "ù"},
                                           {Qt::Key_Comma, ","},
                                           {Qt::Key_Period, ";"},
                                           {Qt::Key_Slash, ":"}};

    frDeadKey_ = {// ^ (circonflexe)
                  {Qt::Key_Dead_Circumflex,
                   {{"a", "â"},
                    {"e", "ê"},
                    {"i", "î"},
                    {"o", "ô"},
                    {"u", "û"},
                    {"A", "Â"},
                    {"E", "Ê"},
                    {"I", "Î"},
                    {"O", "Ô"},
                    {"U", "Û"}}},

                  // ¨ (tréma)
                  {Qt::Key_Dead_Diaeresis,
                   {{"a", "ä"},
                    {"e", "ë"},
                    {"i", "ï"},
                    {"o", "ö"},
                    {"u", "ü"},
                    {"y", "ÿ"},
                    {"A", "Ä"},
                    {"E", "Ë"},
                    {"I", "Ï"},
                    {"O", "Ö"},
                    {"U", "Ü"},
                    {"Y", "Ÿ"}}},

                  // ` (accent grave)
                  {Qt::Key_QuoteLeft,
                   {{"a", "à"},
                    {"e", "è"},
                    {"i", "ì"},
                    {"o", "ò"},
                    {"u", "ù"},
                    {"A", "À"},
                    {"E", "È"},
                    {"I", "Ì"},
                    {"O", "Ò"},
                    {"U", "Ù"}}},

                  // ´ (accent aigu)
                  {Qt::Key_acute,
                   {{"a", "á"},
                    {"e", "é"},
                    {"i", "í"},
                    {"o", "ó"},
                    {"u", "ú"},
                    {"y", "ý"},
                    {"A", "Á"},
                    {"E", "É"},
                    {"I", "Í"},
                    {"O", "Ó"},
                    {"U", "Ú"},
                    {"Y", "Ý"}}},

                  // ~ (tilde)
                  {Qt::Key_AsciiTilde,
                   {{"a", "ã"},
                    {"o", "õ"},
                    {"n", "ñ"},
                    {"A", "Ã"},
                    {"O", "Õ"},
                    {"N", "Ñ"}}}};
}

void MainWindow::changeKeyboardLanguage() {

    for (auto i = keysUpper_.begin(); i != keysUpper_.end(); i++) {
        Qt::Key key = i.key();
        QString upper = i.value();
        QString lower = keysLower_.value(key);
        QTextEdit* text_edit = this->keyToUi(key);

        QString temp_text;
        if (upper == lower.toUpper()) {
            temp_text = QString(
                            "<div align='center'>"
                            "<span style='font-size:18pt;'>%1"
                            "</span>"
                            "</div>")
                            .arg(upper);
        } else {
            temp_text = QString(
                            "<div align='center'>"
                            "<span style='font-size:18pt;'>"
                            "<sup> %2 </sup>"
                            "%1"
                            "</span>"
                            "</div>")
                            .arg(lower, upper);
        }

        text_edit->setText(temp_text);
    }
}

void MainWindow::OpenFile() {
    try {
        QString path = QFileDialog::getOpenFileName(
            this, "Choose Text File", "/home/roma/Documents/KeyBoard",
            "Text File(*.txt)");

        QFile* file = new QFile(path);
        if (!file->open(QIODevice::ReadOnly | QIODevice::Text)) {
            throw std::runtime_error("Can't read from File");
        }

        this->changeTaskText(file->readAll());
        this->ClearInput();
        file->close();
    }


    catch (const std::runtime_error& ex) {
        QMessageBox::warning(this, "Can't Open File", ex.what());
    }
}

void MainWindow::ClearInput() {
    userInput_.clear();
    ui_->userInput->setText(userInput_);
    ui_->userInput->setPalette(normalInput_);
    this->checkInput();
    this->clearParametrs();
    timerUpdateParametrs_->start(updatingTime_);
}

void MainWindow::UpdateParametrsSlot() {
    double accuracy =
        rightCharacters_ / (wrongCharacters_ + rightCharacters_) * hundread_;
    ui_->labelAccuracy->setText(QString::number(accuracy) + "% / " +
                                QString::number(previousAccuracy_) + '%');

    ellapsedSeconds_++;

    double chars_per_sec = inputedCharacters_ / ellapsedSeconds_;
    ui_->labelCharsPerSec->setText(QString::number(chars_per_sec) + " / " +
                                   QString::number(previousCharsPerSec_));

    double words_per_min = inputedWords_ / ellapsedSeconds_ * secondsInMinute_;
    ui_->labelWordsPerMin->setText(QString::number(words_per_min) + " / " +
                                   QString::number(previousWordsPerMin_));
}

void MainWindow::UpdateLanguageSlot() {
    QHash<Qt::Key, QString> prev_keys_upper = keysUpper_;

    if (ui_->comboBoxLanguage->currentText() == "English") {
        keysUpper_ = enKeysUpper_;
        keysLower_ = enKeysLower_;
    } else if (ui_->comboBoxLanguage->currentText() == "Русский") {
        keysUpper_ = ruKeysUpper_;
        keysLower_ = ruKeysLower_;
    } else if (ui_->comboBoxLanguage->currentText() == "Deutsch") {
        keysUpper_ = deKeysUpper_;
        keysLower_ = deKeysLower_;
        deadKey_ = deDeadKey_;
    } else if (ui_->comboBoxLanguage->currentText() == "Français") {
        keysUpper_ = frKeysUpper_;
        keysLower_ = frKeysLower_;
        deadKey_ = frDeadKey_;
    }


    if (prev_keys_upper != keysUpper_) {
        this->changeKeyboardLanguage();
    }
}
