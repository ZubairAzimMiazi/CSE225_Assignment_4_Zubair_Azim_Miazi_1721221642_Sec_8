#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include<string>
const int DEFAULT_MAX_SIZE = 6;
//Exception class
class FullQueue {
public:
 std::string Error() { return "The Queue is full."; }
};
//Exception class
class EmptyQueue {
public:
 std::string Error() { return "The Queue is empty."; }
};
template<class ItemType>
class QueType{
public:
 QueType();
 QueType(int size);
 ~QueType();
void MakeEmpty();
bool IsEmpty();
bool IsFull();
int CurrentSize();
void Enqueue(ItemType newItem);
void Dequeue(ItemType& Item);
void Front(ItemType& Item);
void Print();
private:
ItemType front = -1;
ItemType rear = 0;
ItemType* items = NULL;
ItemType capacity = DEFAULT_MAX_SIZE;
int currentSize = 0;
};
#endif // !QUETYPE_H_INCLUDED
