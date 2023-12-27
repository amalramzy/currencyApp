
#include <iostream>

using namespace std;
#include <string>
#include "currency_list.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void getInt(int & y);
int main() {
	int to,from;
	CurrencyList l1,l2;
	l1.insertEnd(1, "EGP",1);
 	l1.insertEnd(2, "USD",1);
 	l1.insertEnd(3, "SAR",1);
 	l1.insertEnd(4, "JPY",1);
 	l1.insertEnd(5, "EUR",1);
 	
	l2.insertEnd(1,"Bitcoin",128859.74);
	l2.insertEnd(2,"Bitcoin",41675.20);
	l2.insertEnd(3,"Bitcoin",156329.63);
	l2.insertEnd(4,"Bitcoin",614167.22);
	l2.insertEnd(5,"Bitcoin",38469.86);
	cout << "------------------- Welcome ------------" << endl;
	cout << "----------------------------------------" << endl;
	l1.traverse();

	
l1.display(l2);
		
	

	return 0;
}
void getInt(int & y)
{
		int x = 0;
	
			cin >> x;
			
			if(x != 0)
			{
				y = x;
			
			}
		
}
