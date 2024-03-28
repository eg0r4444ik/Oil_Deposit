#pragma once
#include "Well.h"

class OilWell : public Well {
public:
    OilWell(int in, int out, int num, int volume) : Well(in, out, num, volume) {};
};

