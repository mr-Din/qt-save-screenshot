#include "Screenshot.h"
#include "Utils.h"

Screenshot::Screenshot()
{}

void Screenshot::save()
{
    QString file_path = generatePath("png");
    qDebug()<<"Сохранение скриншота: "<<file_path;
}
