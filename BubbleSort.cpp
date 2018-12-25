#include "BubbleSort.h"
#include <iostream>
using namespace std;
BubbleSort::BubbleSort()
{

}

void BubbleSort::BubbleSorting(int Array[], int count)
{

	bool swapped = true;
	int index_2 = 0;
	int flag;
	while (swapped)
	{
		swapped = false;
		index_2++;
		for (int index = 0; index < count - index_2; ++index_2)
		{
			if (Array[index] > Array[index+1])
			{
				flag = Array[index];
				Array[index] = Array[index + 1];
				Array[index + 1] = flag;
				swapped = true;
				for (int index_3 = 0; index_3 < count; ++index_3)
				{
					cout << Array[index_3] << " " << endl;
				}
				cout << endl;
			}
		}
	}
}

BubbleSort::~BubbleSort()
{

}
