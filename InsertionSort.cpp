#include "InsertionSort.h"
#include <iostream>
#include <vector>
using namespace std;
InsertionSort::InsertionSort()
{

}
InsertionSort::~InsertionSort()
{

}
void InsertionSort::InsertionSorting(int array[], int array_size)
{

	if (array_size > 1)
	{
		int size = array_size;
		for (int i = 1; i < size; ++i)
		{
			int j = i - 1;
			int key = array[i];
			while (j >= 0 && array[j] > key)
			{
				array[j + 1] = array[j];
				--j;
			}
			array[j + 1] = key;
			for (int k = 0; k < array_size; ++k)
			{
				cout << array[k] << " ";
			}
			cout << endl;
		}
	}
}
