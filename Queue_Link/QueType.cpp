#include "QueType.h"
#include <iostream>

using namespace std;

template<class ItemType>
QueType<ItemType>::QueType(){
 front = nullptr;
 rear = nullptr;
 currentSize = 0;
}

template<class ItemType>
QueType<ItemType>::~QueType(){
 MakeEmpty();
}
template<class ItemType>
void QueType<ItemType>::MakeEmpty(){
 ItemType dummyItem;
while (!IsEmpty())
 Dequeue(dummyItem);
}
template<class ItemType>
bool QueType<ItemType>::IsEmpty(){
return ((currentSize ==0) && (front==nullptr) && (rear==nullptr));
}
template<class ItemType>
bool QueType<ItemType>::IsFull(){
try{
 NodeType* newNode = new NodeType();
 delete newNode;
 }
catch (const std::bad_alloc& ){
 return true;
 }
return false;
}
template<class ItemType>
int QueType<ItemType>::CurrentSize(){
return currentSize;
}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem){
if (IsFull())
 throw FullQueue();
else {
 NodeType* newNode = new NodeType();
 newNode->info = newItem;
 newNode->next = nullptr;

 if (rear == nullptr)
 front = newNode;
 else
 rear->next = newNode;
 rear = newNode;
 this->currentSize++;
 }
}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& newItem){
if (IsEmpty()) {
 throw EmptyQueue();
 }
else {
 NodeType* dequeuedNode = front;
 front = front->next;
 newItem = dequeuedNode->info;
 if (front == nullptr)
 rear = nullptr;
 delete dequeuedNode;
 this->currentSize--;
 }
}

template<class ItemType>
void QueType<ItemType>::Print(){
    if(front==NULL){
         cout << " "<<endl;
    }
    NodeType *temp=front;
    //will check until NULL is not found
    while(temp){
        cout<<temp->info<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
