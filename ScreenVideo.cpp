#include "ScreenVideo.h"

ScreenVideo::ScreenVideo(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    screenWindow = std::make_unique<QWidget>();
    QLabel lbScreen;

    auto screen = QGuiApplication::primaryScreen();

    screenWindow->resize(screen->geometry().width(),screen->geometry().height());
    lbScreen.resize(screen->geometry().width(), screen->geometry().height());
   

    screenWindow->setWindowFlags(Qt::CustomizeWindowHint);
    screenWindow->show();
}

ScreenVideo::~ScreenVideo()
{}
