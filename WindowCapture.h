#pragma once

#include "Printable.h"

class WindowCapture final : public Printable
{
public:
    WindowCapture();

    void save();
};

