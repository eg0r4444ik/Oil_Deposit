#pragma once
#include <string>
#include <vector>
#include "Deposit.h"
#include "Well.h"
#include "OilWell.h"
#include "GasWell.h"
#include "InjectionWell.h"

class RequestHandler
{
private:
	vector<Deposit> deposits;
	vector<Well> wells;
public:
	string processRequest(string s);
};

