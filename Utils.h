#pragma once
#include <QDateTime>
#include <QWidget>

inline QString generatePath(const QString &extension)
{
    QDateTime current_dt = QDateTime::currentDateTime();
    QString folder_name = current_dt.toString("dd-MM-yyyy");
    QString file_name = current_dt.toString("hh-mm-ss");

    return folder_name + "/" + file_name + "." + extension;
}
