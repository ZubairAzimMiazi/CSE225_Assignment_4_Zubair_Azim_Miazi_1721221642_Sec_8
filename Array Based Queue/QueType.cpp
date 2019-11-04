#include "QueType.h"
#include <iostream>

using namespace std;

template<class ItemType>
QueType<ItemType>::QueType(){
 front = -1;
 rear = -1;
 capacity = DEFAULT_MAX_SIZE;
 items = new int[capacity];
 currentSize = 0;
}

template<class ItemType>
QueType<ItemType>::QueType(int size){
 front = -1;
 rear = -1;
 capacity = size;
 items = new int[capacity];
 currentSize = 0;
}

template<class ItemType>
QueType<ItemType>::~QueType(){
 MakeEmpty();
delete items;
}

template<class ItemType>
void QueType<ItemType>::MakeEmpty(){
 front = -1;
 rear = -1;
 currentSize = 0;
}

template<class ItemType>
bool QueType<ItemType>::IsEmpty(){
return (front==rear);
}

template<class ItemType>
bool QueType<ItemType>::IsFull(){
return (currentSize==capacity);
}

template<class ItemType>
int QueType<ItemType>::CurrentSize(){
return currentSize;
}
//Throws FullQueue Exception if the queue is full
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem){
if (IsFull())
 throw FullQueue();
else{
 items[rear] = newItem;
 rear++;
 rear= rear% capacity;
 currentSize++;
 }
}
//Throws EmptyQueue Exception if the queue is empty
template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType &item){
if (IsEmpty())
 throw EmptyQueue();
else {
 front = (front + 1) % capacity;
 item = items[front];
 currentSize--;
 }
}

template<class ItemType>
void QueType<ItemType>::Front(ItemType & item){
if (IsEmpty())
 throw EmptyQueue();
else {
 int tempIndex = (front + 1) % capacity;
 item = items[tempIndex];
 }
}

template<class ItemType>
void QueType<ItemType>::Print()
    {
        while(front != rear)
        {
            cout<<items[front];
            front++;
            if(front==rear)
               break;
            cout<<" ";
        }
        cout<<endl;
    }

