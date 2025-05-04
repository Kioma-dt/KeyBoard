#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QFileDialog>
#include <QFont>
#include <QHash>
#include <QKeyEvent>
#include <QMainWindow>
#include <QMessageBox>
#include <QPalette>
#include <QScrollBar>
#include <QString>
#include <QTimer>
#include "winwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum Language { kEnglish = 0, kRussian };

class MainWindow : public QMainWindow {
    Q_OBJECT


   public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

   private:
    Ui::MainWindow* ui_;
    QPalette normalKey_;
    QPalette pressedKey_;
    QPalette normalTaskText_;
    QPalette normalInput_;
    QPalette errorInput_;
    QString userInput_;
    QString taskText_;
    bool capsLock_ = false;
    double rightCharacters_ = 1;
    double wrongCharacters_ = 0;
    double previousAccuracy_ = -1;
    double inputedCharacters_ = 0;
    double previousCharsPerSec_ = -1;
    double inputedWords_ = 0;
    double previousWordsPerMin_ = -1;
    double ellapsedSeconds_ = 0;
    QTimer* timerUpdateParametrs_;

    Language language_ = kEnglish;
    QHash<int, QVector<char>> keysUpper_;
    QHash<int, QVector<char>> keysLower_;

    WinWindow* winwindow_;

    const int pressLatence_ = 250;
    const int fontSize_ = 15;
    const int updatingTime_ = 1000;
    const int hundread_ = 100;
    const int secondsInMinute_ = 60;

    void keyPressEvent(QKeyEvent* event) override;
    void changeTaskText(const QString& newText);
    void checkInput();
    void fixParametrs();
    void clearParametrs();
    void initLanguages();

   private slots:
    void OpenFile();
    void ClearInput();
    void UpdateParametrsSlot();
};
#endif	// MAINWINDOW_H
