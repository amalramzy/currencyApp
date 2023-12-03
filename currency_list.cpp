
#include <iostream>
#include"currency_list.h"
using namespace std;
using std::string;


// Member Functions
// Class Constructor
CurrencyList::CurrencyList()
{
	head = NULL; cursor = NULL;  prev = NULL;
}

// Class Destructor
CurrencyList::~CurrencyList()
{
	makeListEmpty();
}

// return True if list is empty
bool CurrencyList::listIsEmpty() const
{
	return (head == NULL);
}

// return True if current position is empty
bool CurrencyList::curIsEmpty() const
{
	return (cursor == NULL);
}

// to make the current node the first node; if list is empty,
// the current position is still empty
void CurrencyList::toFirst() 
{
	cursor = head;  prev = NULL;
}

// to return True if the current node is the first node or
// if the list and the current position are both empty.
bool CurrencyList::atFirst() const
{
	return (cursor == head);
}

// to advance to next node. Assume the current position
// is nonempty initially.
void CurrencyList::advance() 
{
	prev = cursor;
	cursor = cursor->next;
}

// to make the current node the tail node;
// if list is empty, the current position is still empty
void CurrencyList::toEnd()
{
	toFirst();
	if (! listIsEmpty())
		while ( cursor->next != NULL) advance();
}

// to return True if the current node is the tail node or
// if the list and the current position are both empty.
bool CurrencyList::atEnd() const
{
	if ( listIsEmpty()) return true;
		else if (curIsEmpty()) return false;
			else return (cursor->next == NULL);
}

// to return the size of the list
int CurrencyList::listSize() const
{
	NodePointer q; // node * q;
	 	int count;
	q = head;	count = 0;
	while (q != NULL)
	{
		count++; 	q = q->next;
	}
	return count;
}

// to update the data portion of the current node to contain el;
// assume the current position is nonempty.
void CurrencyList::updateData( string &d,double &p)
{
	cursor->data = d;
	cursor->price = p;
}

// to return the data in the current node;
// assume the current position is nonempty.
void CurrencyList::retrieveData(double &p ,string &d, int &k) const
{
	d = cursor->data; //return cursor->data
	k = cursor ->key;
	p = cursor->price;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
void CurrencyList::retrieveKey(int &k) const
{
	k = cursor->key; //return cursor->data
}

// insert a node with data (el) at the head of the list;
// the new node becomes the current node.
void CurrencyList::insertFirst(const int &k, const string &d ,const double &p)
{
	NodePointer pnew; //node * pnew;
	pnew = new node;
	pnew->key = k; pnew->data = d,pnew->price=p;
	pnew->next = head;
	head = pnew;
	cursor = head;
	prev = NULL;
}



// insert a node with data (el) after the current node
// without changing the current position;
// assume the current position is nonempty in a non-empty list.
void CurrencyList::insertAfter(const int &k, const string &d ,const double &p)
{
	NodePointer pnew;
	pnew = new node;
	pnew->key = k; pnew->data = d,pnew->price=p;
	pnew->next = cursor->next;
 	cursor->next = pnew;
 	prev = cursor;
 	cursor = pnew;
}


// insert a node with data (el) before the current node,
// current position becomes the new node.
void CurrencyList::insertBefore(const int &k, const string &d ,const double &p)
{
	NodePointer pnew;
	pnew = new node;
	pnew->key = k; pnew->data = d,pnew->price=p;
	pnew->next = cursor; //pnew->next = prev ->next
    prev->next = pnew;
	cursor = pnew;
}

// insert a node with data (el) at the end of the list,
// current position becomes the new node.
void CurrencyList::insertEnd(const int &k, const string &d,const double &p )
{
	if (listIsEmpty()) insertFirst(k,d,p);
	else {toEnd(); insertAfter(k,d,p); }
}




// delete the current node and set the current position to the next node;
// if the current node is the last node initially, the current position becomes empty;
// assume the current position is nonempty initially.
void CurrencyList::deleteNode()
{
	NodePointer q;
   	if(! curIsEmpty())
	{			// current node is not empty
		if (atFirst()) 	// delete head node
   		{	q = cursor;
			cursor = cursor->next;
			head = cursor;
      		delete q;
      		//q= head;
      		//head = head->next;
      		//cursor = head;
      		//delete q;
		}

		else 		// delete non-head node
   		{	q = cursor;
			cursor = cursor->next;
			prev->next = cursor;
			delete q;
		}
   }
}

// delete the first node and set the current position to the next node;
// if it was initially the only node, the current position becomes empty;
// assume the current position is nonempty initially.
void CurrencyList::deleteFirst()
{
	if(! listIsEmpty()) {toFirst(); deleteNode();}
}

// delete the last node and set the current position to empty;
// assume the current position is nonempty initially.
void CurrencyList::deleteEnd()
{
	if(! listIsEmpty()) {toEnd(); deleteNode();}
}

// delete whole list
void CurrencyList::makeListEmpty()
{
     toFirst();
     while (! listIsEmpty())
        deleteNode();
}

// search the list for the node with key part that matches (k).
// If found, set cursor to the node and return True,
// else return false and the current position becomes empty.
bool CurrencyList::search(const int &k )
{
	bool found = false;
  	toFirst();
	while ((cursor != NULL))
		if (k == cursor->key) {
		
			found = true;
			return found;
		}
		else advance();
		return found;
	
}




// insert a node in a position that maintains an ascending
// order of the key portion of the nodes.
void CurrencyList::orderInsert(const double &p,const string &d, const int &k )
{
	toFirst();
	while ((cursor != NULL) && (k > cursor->key))
		advance();
	if (prev == NULL)  insertFirst(k,d,p);
		else insertBefore(k,d,p);
}

// traverse list to print key and data fields
void CurrencyList::traverse()
{


	toFirst();
	while (! curIsEmpty())
	{
		cout << cursor->key << " - "<<cursor->data << endl;
		advance();
	}
}

