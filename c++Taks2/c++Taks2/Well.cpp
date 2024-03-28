using namespace std;

#include "Well.h"

int Well::getInput() {
    return inputV;
}
int Well::getOutput() {
    return outputV;
}
int Well::getNumber() {
    return number;
}
bool Well::getActive() {
    return isActive;
}
void Well::setInput(int inputV) {
    this->inputV = inputV;
}
void Well::setOutput(int outputV) {
    this->outputV = outputV;
}
void Well::setNumber(int number) {
    this->number = number;
}
void Well::setActive(bool active) {
    this->isActive = active;
}