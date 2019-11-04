#define UNSORTEDTYPE_H_INCLUDED
template <class ItemType>
class UnsortedType
{
struct NodeType
{
ItemType info;
NodeType* next=nullptr;
};
public:
UnsortedType();
~UnsortedType();
bool IsFull();
int GetLength();
void MakeEmpty();
ItemType GetItem(ItemType, bool&);
void PutItem(ItemType);
bool DeleteItem(ItemType);
void ResetList();
ItemType GetNextItem();
private:
int length = 0;
NodeType * listData = nullptr;
NodeType* currentPos = nullptr;
};
#endif // UNSORTEDTYPE_H_INCLUDED
