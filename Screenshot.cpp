#include "Screenshot.h"

Screenshot::Screenshot()
{}

void Screenshot::save()
{
    QString file_path = generatePath("png");
    qDebug()<<"Сохранение скриншота: "<<file_path;
}
