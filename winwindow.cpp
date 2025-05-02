#include "winwindow.h"
#include "ui_winwindow.h"

WinWindow::WinWindow(QWidget* parent)
    : QDialog(parent), ui_(new Ui::WinWindow) {
    ui_->setupUi(this);

    connect(ui_->buttonNew, &QPushButton::clicked, this, &WinWindow::New);
    connect(ui_->buttonRepeat, &QPushButton::clicked, this, &WinWindow::Repeat);
}

WinWindow::~WinWindow() {
    delete ui_;
}

void WinWindow::Repeat() {
    emit RepeatTheSame();
    this->close();
}

void WinWindow::New() {
    emit TryNew();
    this->close();
}
