#pragma once

#include <QtWidgets/QMainWindow>
#include <QGuiApplication>
#include <QScreen>
#include <QLabel>
#include "ui_ScreenVideo.h"

class ScreenVideo : public QMainWindow
{
    Q_OBJECT

public:
    ScreenVideo(QWidget *parent = nullptr);
    ~ScreenVideo();

private:
    std::unique_ptr<QWidget> screenWindow;
    Ui::ScreenVideoClass ui;
};
