#include "Printable.h"

#include <QDateTime>

Printable::Printable()
{}

QString Printable::generatePath(const QString &extension) const
{
    QDateTime current_dt = QDateTime::currentDateTime();
    QString folder_name = current_dt.toString("dd-MM-yyyy");
    QString file_name = current_dt.toString("hh-mm-ss");

    return folder_name + "/" + file_name + "." + extension;
}
