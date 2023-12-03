#pragma once
#include <string>
#include "currency_list.h"
using namespace std;
class CurrencyList;
class  CurrencyData
{
public:
	string id;
	string name;
	double value;

	CurrencyData();
	CurrencyData( string id,  string name , double value);
	void operator=(CurrencyData );
	
};
