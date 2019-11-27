#include "quicksort.h"

void swap(int* arr, int i, int j){
	if(i == j)
		return;

	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int* unsorted, int start, int end){
	if(start == end)
		return start;

	int pivot = unsorted[end];
	int i = start-1;
	for(int j=start; j<end; j++){
		if(unsorted[j]>=pivot)
			continue;

		swap(unsorted, ++i, j);
	}
	swap(unsorted, ++i, end);
	return i;
}

void quicksort(int* unsorted, int start, int end){
	if(start >= end)
		return;

	int q = partition(unsorted,start,end);
	if(q > start)
		quicksort(unsorted,start,q-1);
	if(q < end)
		quicksort(unsorted,q+1,end);
}

void quicksort(int* unsorted, int length){
	quicksort(unsorted,0,length-1);
}
