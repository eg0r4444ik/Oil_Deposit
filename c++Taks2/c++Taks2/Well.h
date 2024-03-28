#pragma once

class Well {
private:
    int inputV;
    int outputV;
    int number;
    bool isActive;
    int volumePerSec;
    int lastUpdate;
public:
    Well(int in, int out, int num, int volume) {
        inputV = in;
        outputV = out;
        number = num;
        volumePerSec = volume;
    };

    int getInput();
    int getOutput();
    int getNumber();
    bool getActive();
    void setInput(int inputV);
    void setOutput(int outputV);
    void setNumber(int number);
    void setActive(bool active);
};


