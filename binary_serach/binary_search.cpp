#include "binary_search.h"
// returns position of x in input arr, if found within indices marked by start and end
// returns -1 if not
int binary_search(int start, int end, int input[], int x){
	if(start == end){
		return (x == input[start]) ? start : -1;
	}

	int midIndex = (start+end)/2;
	if (input[midIndex] == x){
		return midIndex;
	}

	if(input[midIndex] > x){
		return (midIndex-1 > start) ? binary_search(start, midIndex-1, input, x) : binary_search(start, start, input, x);
	} else {
		return (midIndex+1 < end) ? binary_search(midIndex+1, end, input, x) : binary_search(end, end, input, x);
	}
}

// returns position of x in input arr, if found
// returns -1 if not
int binary_search(int input[], int lengthOfArr, int x){
	return binary_search(0, lengthOfArr-1, input, x);
}