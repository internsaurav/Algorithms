#ifndef MAX_SUBARRAY_H
#define MAX_SUBARRAY_H

struct subarrayData {
	int startIndex;
	int endIndex;
	int sum;
};

subarrayData max_subarray(int input[],int inputSize);

#endif