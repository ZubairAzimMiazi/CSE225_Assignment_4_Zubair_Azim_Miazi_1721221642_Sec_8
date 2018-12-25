#include "SelectionSort.h"
#include <iostream>
using namespace std;
SelectionSort::SelectionSort()
{

}
SelectionSort::~SelectionSort()
{

}
void inline Swap(int &first_number, int &second_number)
{
	int index_3 = first_number;
	first_number = second_number;
	second_number = index_3;
}
void SelectionSort::SelectionSorting(int array[], int array_size)
{

	for (int index_1 = 0; index_1 < array_size - 1; ++index_1)
	{
		int minimum = index_1;
		for (int index_2 = index_1 + 1; index_2 < array_size; ++index_2)
		{
			if (array[index_2] < array[minimum])
				minimum = index_2;
		}
		Swap(array[minimum], array[index_1]);
		for (int index_3 = 0; index_3 < array_size; ++index_3)
		{
			cout << array[index_3] << " ";
		}
		cout << endl;
	}
}
