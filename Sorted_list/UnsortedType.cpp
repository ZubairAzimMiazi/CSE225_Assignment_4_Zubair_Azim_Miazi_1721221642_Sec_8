#include "Unsortedtype.h"
#include <iostream>
#include <exception>
using namespace std;
template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
length = 0;
listData = nullptr;
currentPos = nullptr;
}
template <class ItemType>
int UnsortedType<ItemType>::GetLength()
{
return length;
}
template<class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
NodeType* location = nullptr;
try
{
location = new NodeType;
delete location;
}
catch (bad_alloc exception)
{
return true;
}
return false;
}
template <class ItemType>
void UnsortedType<ItemType>::PutItem(ItemType item)
{
NodeType* location = new NodeType;
location->info = item;
location->next = listData;
listData = location;
length++;
}

ItemType UnsortedType<ItemType>::GetItem(ItemType item, bool &found)
{
ItemType returnItem;
NodeType* location = listData;
found = false;
returnItem = item;
while (location != nullptr)
{
if (item == location->info)
{
found = true;
returnItem = location->info;
break;
}
else
location = location->next;
}
return returnItem;
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
NodeType* locationToDelete = nullptr;
while (listData != NULL)
{
locationToDelete = listData;
listData = listData->next;
if (locationToDelete == currentPos)
{
//This means the iterator is going to be deleted
//Means we have to update the iterator currentPos as well
currentPos = currentPos->next;
}
delete locationToDelete;
length--;
}
}
template<class ItemType>
void UnsortedType<ItemType>::ResetList()
{
currentPos = nullptr;
}
template <class ItemType>
bool UnsortedType<ItemType>::DeleteItem(ItemType item)
{
NodeType* currentLocation = listData;
NodeType* previousLocation = nullptr;
bool found = false;
if (currentLocation != nullptr)
{
if ((item == (currentLocation->info)))
{
//Item is in the head of the linkedList
found = true;
listData = listData->next;
delete previousLocation;
length--;
}
else
{
//Item is not in the head of the LinkedList. And there is
//Atleast one item in the LinkedList. Item may be in other
//parts of the linkedList;
previousLocation = currentLocation;
currentLocation = currentLocation->next;
bool moreToSearch = (currentLocation != nullptr);
while (moreToSearch && !found)
{
if (item == (currentLocation->info))
{
found = true;
NodeType* locationToDelete = currentLocation;
previousLocation->next = currentLocation->next;
locationToDelete->next = nullptr;
delete locationToDelete;
length--;
}
else
{
previousLocation = currentLocation;
currentLocation = currentLocation->next;
moreToSearch = (currentLocation != nullptr);
}
}
}
}
//This tells if the item to be searched has been found and deleted;
return found;
}

template<class ItemType>
ItemType UnsortedType<ItemType>::GetNextItem()
{
if (currentPos == nullptr)
currentPos = listData;
else
currentPos = currentPos->next;
//But what happens when after doing currentPos = currentPos->next
//makes currentPos ==nullptr?
//At that time, currentPos->info will throw exception.
if (currentPos == nullptr)
{
std::cout << "Reached at the end of the list" << std::endl;
std::cout << "Printing Garbage Value" << std::endl;
return ItemType();
}
return currentPos->info;
}
template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
MakeEmpty();
}
