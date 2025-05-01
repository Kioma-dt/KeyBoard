#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFont>
#include <QKeyEvent>
#include <QMainWindow>
#include <QPalette>
#include <QScrollBar>
#include <QString>
#include <QTimer>

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
    QString userInput_;
    bool capsLock_ = false;

    const int pressLatence_ = 250;
    const int fontSize_ = 15;

    void keyPressEvent(QKeyEvent* event) override;
};
#endif	// MAINWINDOW_H
