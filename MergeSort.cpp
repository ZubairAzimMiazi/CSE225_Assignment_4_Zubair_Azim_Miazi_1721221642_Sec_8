#include "MergeSort.h"
#include <iostream>
#include <vector>
using namespace std;
MergeSort::MergeSort()
{

}
MergeSort::~MergeSort()
{

}
void MergeSort::MergeSorting(int array[], int array_size)
{

	MergeSortHelp(array, 0,array_size - 1);
}
void MergeSort::Merge(int array[], int first, int third, int second)
{
	int *temp = new int(third - first + 1);
	int index_1 = first, index_2 = second + 1;
	int index_3 = 0;
	while (index_1 <= second && index_2 <= third)
	{
		if (array[index_1] <=array[index_2])
			temp[index_3++] =array[index_1++];
		else
			temp[index_3++] =array[index_2++];
	}
	while (index_1 <= second)
		temp[index_3++] =array[index_1++];
	while (index_2 <= third)
		temp[index_3++] =array[index_2++];
	for (index_3 = 0, index_1 = first; index_1 <= third; ++index_1, ++index_3)
		array[index_1] = temp[index_3];
	delete[]temp;
}
void MergeSort::MergeSortHelp(int array[], int first, int third)
{
	int middle;
	if (first < third)
	{
		middle = (first + third) / 2;
		MergeSortHelp(array, first, middle);
		MergeSortHelp(array, middle + 1, third);
		Merge(array, first, middle, third);
	}
	for (int index_3 = 0; index_3 < third + 1; ++index_3)
	{
		cout <<array[index_3] << " ";
	}
	cout << endl;
}
