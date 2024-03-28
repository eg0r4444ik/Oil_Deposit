#pragma once
using namespace std;

#include "Well.h"
#include <vector>

class Deposit {
private:
    int gasV;
    int oilV;
    int waterV;
    vector<Well> wells;
public:
    Deposit(int gasV, int oilV, int waterV) {
        this->gasV;
        this->oilV;
        this->waterV;
    };

    int getGas();

    int getOil();

    int getWater();

    vector<Well> getWells();

    vector<Well> getActiveWells();

    void deflateGas(int v);

    void deflateOil(int v);

    void deflateWater(int v);

    void addGas(int v);

    void addOil(int v);

    void addWater(int v);

    void addWell(Well well);

    void addWell(int inputV, int outputV, int num, int volume);

    void removeWell(int idx);

    void removeWell(Well w);

    void turnOnWell(int idx);

    void turnOnWell(Well w);

    void turnOffWell(int idx);

    void turnOffWell(Well w);
};

