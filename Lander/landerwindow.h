#ifndef LANDERWINDOW_H
#define LANDERWINDOW_H

#include <QObject>
#include <QOpenGLWindow>

class LanderWindow : public QOpenGLWindow
{
  public:
    LanderWindow();
   ~LanderWindow() override;

    void initializeGL(void) override;
    void resizeGL(int Width, int Height) override;
    void paintGL(void) override;
};

#endif // LANDERWINDOW_H
