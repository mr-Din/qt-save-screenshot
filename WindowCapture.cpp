#include "WindowCapture.h"
#include "Utils.h"

WindowCapture::WindowCapture()
{}

void WindowCapture::save()
{
    QString file_path = generatePath("mp4");
    qDebug()<<"Сохранение видео: "<<file_path;
}
