
#pragma once
#include <iostream>
#include <string>
#include "CurrencyData.h"
using namespace std;
class CurrencyData;
class CurrencyList{
private:
	// Node Class
	   class node
	   {
		public:
			int key; 		// key
			string data;
			double price;		// Data
			string eq_data;
			double eq_price;
			node *next;			// pointer to next node
		}; // end of class node declaration
	   typedef node * NodePointer;

	// Pointers
	NodePointer head, cursor, prev;	
	public:
	CurrencyList();
	~CurrencyList();
	bool listIsEmpty() const;
	bool curIsEmpty() const;
	void toFirst();
	bool atFirst() const;
	void advance();
	void toEnd();
	bool atEnd() const;
	int  listSize() const;
	void updateData(string & ,double &);
	void retrieveData(double &,string &, int &) const;
	void retrieveKey(int &) const;
	void insertFirst(const int &, const string &, const double & );
	void insertAfter(const int &, const string & ,const double & );
	void insertBefore(const int &, const string & ,const double &);
	void insertEnd(const int &, const string & ,const double &);
	void deleteNode();
	void deleteFirst();
	void deleteEnd();
	void makeListEmpty();
	bool search(const int &);
	void display(CurrencyList list);
	void orderInsert(const double & ,const string &, const int & );
	void traverse();
	

	
	
};

