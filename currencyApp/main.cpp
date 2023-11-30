#include <iostream>
using namespace std;
#include <string>
#include "currency.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int to,from;
CurrencyList l1;

	l1.insertEnd(1,"USA");
	l1.insertEnd(2,"EUR");
	l1.insertEnd(3,"GBP");
	l1.insertEnd(4,"CAD");
	l1.insertEnd(5,"AUD");
	l1.insertEnd(6,"JPY");
		cout<<"------------welcome to the currency converter------------"<<endl;

	l1.traverse();
	cout<<"Please enter the number of the currency you want to convert to"<<endl;
	cin>>to;
	l1.traverse();	
	cout<<"Please enter the number of the currency you want to convert from"<<endl;
	cin>>from;
     cout<<"Conversion from "<<from<<" to " <<to<<endl;
	return 0;
}
