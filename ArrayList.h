#pragma once
/** ADT list: Array-based implementation.
@file ArrayList.h */



#include "ListInterface.h"
#include "PrecondViolatedExcep.h"
template< class ItemType>
class ArrayList : public ListInterface<ItemType>
{
private:
	static const int DEFAULT_CAPACITY = 100;
	ItemType items[DEFAULT_CAPACITY]; // Array of list items
	int itemCount; // Current count of list items
	int maxItems; // Maximum capacity of the list
public:
	ArrayList();
	// Copy constructor and destructor are supplied by compiler
	bool isEmpty() const;
	int getLength() const;
	bool insert(int newPosition, const ItemType& newEntry);
	bool remove(int position);
	void clear();
	/** @throw PrecondViolatedExcep if position < 1 or
	position > getLength(). */
	ItemType getEntry(int position) const throw(PrecondViolatedExcep);
	/** @throw PrecondViolatedExcep if position < 1 or
	position > getLength(). */
	void setEntry(int position, const ItemType& newEntry)
		throw(PrecondViolatedExcep);
}; // end ArrayList

#include "ArrayList.cpp"
//TODO: Remove this before you turn it in! Also all of the commented out methods need finished.
//Use this to have the ArrayList.cpp file to load every time a new data type is used. Had to go to ArrayList.cpp...
//right click then select properties. Then on exclude from build select yes to get it to work.


