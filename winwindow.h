#ifndef WINWINDOW_H
#define WINWINDOW_H

#include <QDialog>

namespace Ui {
class WinWindow;
}

class WinWindow : public QDialog {
    Q_OBJECT

   public:
    explicit WinWindow(QWidget* parent = nullptr);
    ~WinWindow();

   private:
    Ui::WinWindow* ui_;

   private slots:
    void Repeat();
    void New();

   signals:
    void RepeatTheSame();
    void TryNew();
};

#endif	// WINWINDOW_H
