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

//TODO: figure out exactly what to put into if statement to make sure position is valid
template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType& newEntry)
{
	if ((newPosition < 1) || (newPosition > itemCount + 1))//itemCount is minus 1 because we start the array at 1 instead of 0.
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
