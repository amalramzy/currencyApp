
#include <iostream>

using namespace std;
#include <string>
#include "currency_list.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int to,from;
	CurrencyList l1;
	CurrencyList l2;
	l1.insertEnd(1, "Yen",15.0);
 	l1.insertEnd(2, "Bitcoin",200.0);
	l2.insertEnd(1,"Bitcoin",200.2);
	cout << "------------------- Welcome ------------" << endl;
	cout << "----------------------------------------" << endl;
	l1.traverse();
	cout << "Select Currency by its number :";
	
	cin >> from;
	cout << from + " selected" << endl;
	l2.traverse();
	cout << "Select the Currency You Want to Convert To : " ;
	
	cin >> to;
	cout << endl;

	if(l2.search(to)){
		int i  = 0; // key
		string k;  // name
		double p;//price
	
	
l2.retrieveData(p,k,i);
cout << "the Currency with Key: " << i << " with the name " << k << " is ..Drum roll.. equal : " << p << endl;
l2.toFirst();
	}

	return 0;
}
