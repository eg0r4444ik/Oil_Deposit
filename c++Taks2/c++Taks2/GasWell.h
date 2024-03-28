#pragma once
#include "Well.h"

class GasWell : public Well {
public:
    GasWell(int in, int out, int num, int volume) : Well(in, out, num, volume) {};
};
