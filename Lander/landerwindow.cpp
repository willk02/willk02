#include <QDebug>
#include "landerwindow.h"

LanderWindow::LanderWindow()
{
    qInfo() << "Created window";
}

LanderWindow::~LanderWindow()
{
    qInfo() << "Destroying window";
}

void LanderWindow::initializeGL(void)
{
    qInfo() << "Initialise window";
}

void LanderWindow::resizeGL(int Width, int Height)
{
    qInfo() << QString("Resize window Width: %1 Height: %2").arg(Width).arg(Height);
}

void LanderWindow::paintGL(void)
{
    qInfo() << "Paint";
}
