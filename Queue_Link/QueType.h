#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include<string>
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
struct NodeType {
 ItemType info;
 NodeType* next;
 };
public:
 QueType();
 ~QueType();
 void Print();
void MakeEmpty();
bool IsEmpty();
bool IsFull();
int CurrentSize();
void Enqueue(ItemType newItem);
void Dequeue(ItemType& newItem);
void Front(ItemType& newItem);
private:
NodeType* front = nullptr;
NodeType* rear = nullptr;
int currentSize = 0;
};
#endif // !QUETYPE_H_INCLUDED
