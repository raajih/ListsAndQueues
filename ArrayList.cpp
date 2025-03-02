#include "ArrayList.h"

template<class ItemType>
inline ArrayList<ItemType>::ArrayList() : itemCount(0), maxItems(DEFAULT_CAPACITY) {} //Contstructor that sets the member variables.

template<class ItemType>
bool ArrayList<ItemType>::isEmpty() const
{
	return itemCount == 0;
}

template<class ItemType>
int ArrayList<ItemType>::getLength() const
{
	return itemCount;
}

template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType& newEntry)
{
	if ((newPosition < 1) || (newPosition > itemCount + 1) || (itemCount >= maxItems))
		return false;

	//Start at the end of the array and bump every element forward one.
	for (int pos = itemCount; pos >= newPosition; pos--)
		items[pos + 1] = items[pos];
	items[newPosition] = newEntry;
	itemCount++;
	return true;
		
	
}

template<class ItemType>
void ArrayList<ItemType>::clear()
{
	itemCount = 0;
}

template<class ItemType>
ItemType ArrayList<ItemType>::getEntry(int position) const throw(PrecondViolatedExcep)
{
	//If position is not valid, throw exception, else return element at position.
	if (position < 1 || position > itemCount)
		throw(PrecondViolatedExcep("Position must be greater than 1 or less than number of items"));

	return items[position];
}

template<class ItemType>
void ArrayList<ItemType>::setEntry(int position, const ItemType& newEntry) throw(PrecondViolatedExcep)
{
	if (position < 1 || position > itemCount)
		throw(PrecondViolatedExcep("Position must be greater than 1 or less than number of items"));

	items[position] = newEntry;
}
