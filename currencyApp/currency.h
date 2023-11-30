#include <iostream>
using namespace std;
#include <string>
class CurrencyList{
	
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
	void updateData(const string & );
	void retrieveData(string &, int &) const;
	void retrieveKey(int &) const;
	void insertFirst(const int &, const string & );
	void insertAfter(const int &, const string & );
	void insertBefore(const int &, const string& );
	void insertEnd(const int &, const string & );
	void deleteNode();
	void deleteFirst();
	void deleteEnd();
	void makeListEmpty();
	bool search(const int & );
	void orderInsert(const string &, const int & );
	void traverse();
	
private:
	// Node Class
	   class node
	   {
		public:
			int key; 		// key
			string data;		// Data
			node *next;			// pointer to next node
		}; // end of class node declaration

	   typedef node * NodePointer;

	// Pointers
	NodePointer head, cursor, prev;	
	
	
};

