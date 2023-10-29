#pragma once

#include "Printable.h"

class Screenshot final : public Printable
{
public:
    Screenshot();

    void save();
};

