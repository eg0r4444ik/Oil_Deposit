using namespace std;
#include <iostream>
#include <string>
#include "RequestHandler.h"

#define nl "\n";

string RequestHandler::processRequest(string s) {
    if (s == "--add_deposit") {
        int gasV, oilV, waterV;
        cin >> gasV >> oilV >> waterV;
        deposits.push_back(Deposit(gasV, oilV, waterV));
        return "OK \n";
    }
    if (s == "--add_well_to_deposit") {
        int depositIdx, inputV, outputV, volume;
        string type;
        cin >> depositIdx >> type >> inputV >> outputV >> volume;
        if (type == "InjectionWell") {
            Well well = InjectionWell(inputV, outputV, wells.size(), volume);
            deposits[depositIdx - 1].addWell(well);
            wells.push_back(well);
        }
        else if (type == "OilWell") {
            Well well = OilWell(inputV, outputV, wells.size(), volume);
            deposits[depositIdx - 1].addWell(well);
            wells.push_back(well);
        }
        else if (type == "GasWell") {
            Well well = GasWell(inputV, outputV, wells.size(), volume);
            deposits[depositIdx - 1].addWell(well);
            wells.push_back(well);
        }
        return "OK \n";
    }
    if (s == "--remove_well_from_deposit") {
        int depositIdx, wellIdx;
        cin >> depositIdx >> wellIdx;
        deposits[depositIdx - 1].removeWell(wellIdx - 1);
        return "OK \n";
    }
    if (s == "--remove_well_from_deposit") {
        int depositIdx, wellNumber;
        cin >> depositIdx >> wellNumber;
        for (Well well : wells) {
            if (well.getNumber() == wellNumber) {
                deposits[depositIdx - 1].removeWell(well);
            }
        }
        return "OK \n";
    }
    if (s == "--turn_on_well") {
        int depositIdx, wellIdx;
        cin >> depositIdx >> wellIdx;
        deposits[depositIdx].turnOnWell(wellIdx - 1);
        return "OK \n";
    }
    if (s == "--turn_off_well") {
        int depositIdx, wellIdx;
        cin >> depositIdx >> wellIdx;
        deposits[depositIdx].turnOffWell(wellIdx - 1);
        return "OK \n";
    }
    if (s == "--turn_on_well") {
        int depositIdx, wellNumber;
        cin >> depositIdx >> wellNumber;
        for (Well well : wells) {
            if (well.getNumber() == wellNumber) {
                deposits[depositIdx - 1].turnOnWell(well);
            }
        }
        return "OK \n";
    }
    if (s == "--turn_off_well") {
        int depositIdx, wellNumber;
        cin >> depositIdx >> wellNumber;
        for (Well well : wells) {
            if (well.getNumber() == wellNumber) {
                deposits[depositIdx - 1].turnOffWell(well);
            }
        }
        return "OK \n";
    }
    if (s == "--get_active") {
        int depositIdx;
        cin >> depositIdx;

        if (deposits[depositIdx - 1].getActiveWells().empty()) {
            return "deposit dont have active wells \n";
        }
        else {
            for (Well well : deposits[depositIdx - 1].getActiveWells()) {
                cout << "\n well number is: " << (well.getNumber()+1);
                cout << "\n well inputV is: " << well.getInput();
                cout << "\n well outputV is : " << well.getOutput();
            }

            return "";
        }
    }
}