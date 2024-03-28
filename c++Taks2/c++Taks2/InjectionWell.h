#pragma once
#include "OilWell.h"

class InjectionWell : public Well {
public:
    InjectionWell(int in, int out, int num, int volume) : Well(in, out, num, volume) {};
};

