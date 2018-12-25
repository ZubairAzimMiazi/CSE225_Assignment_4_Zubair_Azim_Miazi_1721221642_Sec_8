#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED
#include <vector>
using namespace std;
class MergeSort
{
public:
	MergeSort();
	~MergeSort();
	void MergeSortHelp(int array[], int high, int low);
	void Merge(int array[], int low, int high, int medium);
	void MergeSorting(int array[], int array_size);
};
#endif // !MERGESORT_H_INCLUDED
