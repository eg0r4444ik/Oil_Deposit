using namespace std;

#include "Deposit.h"
#include <vector>

int Deposit::getGas() {
    return gasV;
}

int Deposit::getOil() {
    return oilV;
}

int Deposit::getWater() {
    return waterV;
}

vector<Well> Deposit::getWells() {
    return wells;
}

vector<Well> Deposit::getActiveWells() {
    vector<Well> res;
    for (int i = 0; i < wells.size(); i++) {
        if (wells[i].getActive()) {
            res.push_back(wells[i]);
        }
    }

    return res;
}

void Deposit::deflateGas(int v) {
    gasV -= v;
}

void Deposit::deflateOil(int v) {
    oilV -= v;
}

void Deposit::deflateWater(int v) {
    waterV -= v;
}

void Deposit::addGas(int v) {
    gasV += v;
}

void Deposit::addOil(int v) {
    oilV += v;
}

void Deposit::addWater(int v) {
    waterV += v;
}

void Deposit::addWell(Well well) {
    well.setActive(true);
    wells.push_back(well);
}

void Deposit::addWell(int inputV, int outputV, int num, int volume) {
    wells.push_back(Well(inputV, outputV, num, volume));
    wells[wells.size() - 1].setActive(true);
}

void Deposit::removeWell(int idx) {
    wells.erase(wells.begin() + idx);
}

void Deposit::removeWell(Well w) {
    for (int i = 0; i < wells.size(); i++) {
        if (wells[i].getNumber() == w.getNumber()) {
            removeWell(i);
        }
    }
}

void Deposit::turnOnWell(int idx) {
    wells[idx].setActive(true);
}

void Deposit::turnOnWell(Well w) {
    for (int i = 0; i < wells.size(); i++) {
        if (wells[i].getNumber() == w.getNumber()) {
            wells[i].setActive(true);
        }
    }
}

void Deposit::turnOffWell(int idx) {
    wells[idx].setActive(false);
}

void Deposit::turnOffWell(Well w) {
    for (int i = 0; i < wells.size(); i++) {
        if (wells[i].getNumber() == w.getNumber()) {
            wells[i].setActive(false);
        }
    }
}
