using namespace std;

#include <iostream>
#include "Test.h"
#include "RequestHandler.h"

#define nl "\n";

bool Test::test()
{
    RequestHandler handler = RequestHandler();

    string ans1 = handler.processRequest("--add_deposit 5 10 6");
    string ans2 = handler.processRequest("--add_well_to_deposit 1 GasWell 5 5 2");
    string ans3 = handler.processRequest("--get_active 1");
    string ans4 = handler.processRequest("--add_well_to_deposit 1 OilWell 10 5 1");
    string ans5 = handler.processRequest("--turn_off_well 1 1");
    string ans6 = handler.processRequest("--get_active 1");

    if (ans1 == "OK\n" && ans2 == "OK\n" && ans4 == "OK\n" && ans5 == "OK\n" &&
        ans3 == "\n well number is : 1\n well inputV is: 5\n well outputV is : 5" && ans6 == "\n well number is : 2\n well inputV is: 10\n well outputV is : 5") {
        return true;
    }

    return false;
}


