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

//TODO: Implement insert function
template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType& newEntry)
{
	return false;
}
