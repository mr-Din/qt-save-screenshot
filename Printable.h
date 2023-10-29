#pragma once

#include <QWidget>

class Printable
{
public:
    Printable();
protected:
    virtual QString generatePath(const QString &extension) const;
};

