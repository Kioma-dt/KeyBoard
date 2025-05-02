#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QFileDialog>
#include <QFont>
#include <QKeyEvent>
#include <QMainWindow>
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
    double previousAccuracy_ = 0;
    double inputedCharacters_ = 0;
    double ellapsedSeconds_ = 0;
    double previousCharsPerSec_ = 0;
    QTimer* timerUpdateParametrs_;

    WinWindow* winwindow_;

    const int pressLatence_ = 250;
    const int fontSize_ = 15;
    const int updatingTime_ = 1000;
    const int hundread_ = 100;

    void keyPressEvent(QKeyEvent* event) override;
    void changeTaskText(const QString& newText);
    void checkInput();
    void fixParametrs();

   private slots:
    void OpenFile();
    void ClearInput();
    void UpdateParametrsSlot();
};
#endif	// MAINWINDOW_H
