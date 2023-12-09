
#include <iostream>

using namespace std;
#include <string>
#include "currency_list.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int to,from;
	CurrencyList l1;
	CurrencyList l2;
	l1.insertEnd(1, "EGP",128859.74);
 	l1.insertEnd(2, "USD",41675.20);
 	l1.insertEnd(3, "SAR",156329.63);
 	l1.insertEnd(4, "JPY",614167.22);
 	l1.insertEnd(5, "EUR",38469.86);
	l2.insertEnd(1,"Bitcoin",128859.74);
	l2.insertEnd(2,"Bitcoin",41675.20);
	l2.insertEnd(3,"Bitcoin",156329.63);
	l2.insertEnd(4,"Bitcoin",614167.22);
	l2.insertEnd(5,"Bitcoin",38469.86);
	cout << "------------------- Welcome ------------" << endl;
	cout << "----------------------------------------" << endl;
	l1.traverse();
	cout << "Select Currency by its number :";
	
	cin >> from;
	
	cout << "----------------------------------------" << endl;


	cout << endl;

	if(l2.search(from)){
		int i  = 0; // key
		string k;  // name
		double p;//price
	
	
l2.retrieveData(p,k,i);
cout << "the Currency with Key: " << i << " with the name " << k << " is ..Drum roll.. equal : " << p << endl;

	}

	return 0;
}
