#include "max_subarray.h"

subarrayData max_subarray_across(int splitIndex, int input[], int inputSize){
	//find the left subindex
	int maxSumLeft=input[splitIndex];
	int maxIndexLeft=splitIndex;
	int sum = 0;
	for(int i=splitIndex; i>=0; i--){
		sum += input[i];
		if(sum > maxSumLeft){
			maxSumLeft = sum;
			maxIndexLeft = i;
		}
	}

	//find the right subindex
	int maxSumRight=input[splitIndex+1];
	int maxIndexRight=splitIndex+1;
	sum = 0;
	for(int i=splitIndex+1; i<inputSize; i++){
		sum += input[i];
		if(sum > maxSumRight){
			maxSumRight = sum;
			maxIndexRight = i;
		}
	}

	subarrayData across = {.startIndex=maxIndexLeft, .endIndex=maxIndexRight, .sum = maxSumLeft+maxSumRight};
	return across;
}



subarrayData max_subarray(int start, int end, int input[], int inputSize){
	//same index are trivially sorted
	if(start == end){
		subarrayData maxData{.startIndex=start, .endIndex=end, .sum=input[start]};
		return maxData;
	}

	int midIndex = (start+end)/2;
	subarrayData left = max_subarray(start, midIndex, input, inputSize);
	subarrayData right = max_subarray(midIndex+1, end, input, inputSize);
	subarrayData accross = max_subarray_across(midIndex, input, inputSize);
	if(left.sum >= right.sum && left.sum >= accross.sum){
		return left;
	}
	if(right.sum >= left.sum && right.sum >= accross.sum){
		return right;
	}
	return accross;
}
// returns start and end index of max subarray inclusive
subarrayData max_subarray(int input[],int inputSize){
	return max_subarray(0, inputSize-1, input, inputSize);
}