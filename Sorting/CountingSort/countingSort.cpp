#include <limits.h>
#include <tuple>
#include "countingSort.h"
using namespace std;

//returns a tuple of (min,max)
tuple<int,int> findMinMax(int* unsorted, int length){
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i=0; i<length; i++){
		if(unsorted[i] > max)
			max = unsorted[i];

		if(unsorted[i] < min)
			min = unsorted[i];
	}

	return make_tuple(min, max);
}

void shiftRange(int* numbers, int length, int shift){
	for(int i=0; i<length; i++){
		numbers[i] += shift;
	}
}

void copyArray(int* from, int* to, int length){
	for(int i=0; i<length; i++){
		to[i] = from[i];
	}
}

void countingSort(int* unsorted, int *sorted, int length, int k){
	int* counts = NULL;
	counts = new int[k+1];
	
	for(int i=0; i<=k; i++){
		counts[i] = 0;
	}

	for(int i=0; i<length; i++){
		int thisNum = unsorted[i];
		counts[thisNum]++;
	}

	for(int i=1; i<=k; i++){
		counts[i] += counts[i-1];
	}

	for(int i=length-1; i>=0; i--){
		int thisNum = unsorted[i];
		sorted[counts[thisNum]-1] = thisNum;
		counts[thisNum]--;
	}

	delete[] counts;
}

void countingSort(int* unsorted,int *sorted, int length){
	if(length <1)
		return;

	if(length == 1){
		sorted[0] = unsorted[0];
		return;
	}

	tuple<int,int> minMaxData = findMinMax(unsorted, length);
	
	int min = get<0>(minMaxData);
	int max = get<1>(minMaxData);

	if(max == min){
		copyArray(unsorted, sorted, length);
		return;
	}

	if(min < 0){
		shiftRange(unsorted, length, -1*min);
		max += -1*min;
	}
	
	countingSort(unsorted, sorted, length, max);

	if(min < 0)
		shiftRange(sorted, length, min);
}
