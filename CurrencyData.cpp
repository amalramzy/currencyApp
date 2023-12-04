#include "CurrencyData.h"

CurrencyData::CurrencyData()
{
	id = "";
	name = "";
	value = 0.0;
	
}
CurrencyData::CurrencyData(string id,  string name,  double value)
	{
		this->id = id;
		this->name = name;
		this->value= value;
	
	}

