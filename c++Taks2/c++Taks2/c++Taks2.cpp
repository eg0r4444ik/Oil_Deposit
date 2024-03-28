using namespace std;

#include <iostream>
#include "RequestHandler.h"
#include "Test.h"

#define nl "\n";

int main()
{

    /*Test test = Test();
    if (test.test()) {
        cout << "Тесты пройдены!";
    }else{
        cout << "Тесты не пройдены!";
    }*/

    RequestHandler handler = RequestHandler();

    cout << "--add_deposit gasV oilV waterV" << nl;
    cout << "--add_well_to_deposit deposit_idx type inputV outputV volumePerSec" << nl;
    cout << "--remove_well_from_deposit deposit_idx well_idx" << nl;
    cout << "--remove_well_from_deposit deposit_idx well_number" << nl;
    cout << "--turn_on_well deposit_idx well_idx" << nl;
    cout << "--turn_off_well deposit_idx well_idx" << nl;
    cout << "--turn_on_well deposit_idx well_num" << nl;
    cout << "--turn_off_well deposit_idx well_num" << nl;
    cout << "--get_active deposit_idx" << nl;
    cout << "--exit" << nl;

    while (true) {
        string s;
        cin >> s;
        if (s == "--exit") {
            break;
        }

        cout << handler.processRequest(s);
    }

    return 0;
}


