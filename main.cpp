#include <iostream>
#include "MergeSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
using namespace std;
int main()
{
	BubbleSort bubble_Sort;
	SelectionSort selection_Sort;
	InsertionSort insertion_Sort;
	MergeSort merge_Sort;
    int array[8] = {14,33,27,10,35,19,48,44};
    int x = sizeof(array) / sizeof(array[0]);

    cout << " The unsorted array list is : " << endl;
    for(int index=0; index<8; index++)
    {
        cout<< array[index]<<endl;
    }
    cout<< endl;
    cout << "Sorted by InsertionSort (Step by Step) : " << endl;
    cout << endl;
	insertion_Sort.InsertionSorting(array, x);
	cout << endl;
    cout << "Sorted by SelectionSort (Step by Step) : " << endl;
	cout << endl;
	selection_Sort.SelectionSorting(array, x);
	cout << endl;
    cout << "Sorted by MergeSort (Step by Step) : " << endl;
	cout << endl;
	merge_Sort.MergeSorting(array, x);
	cout << endl;
    cout << "BubbleSort: " << endl;
	cout << endl;
	bubble_Sort.BubbleSorting(array, x);
}
