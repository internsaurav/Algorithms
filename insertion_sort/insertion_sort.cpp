#include "insertion_sort.h"
// returns array containing numbers in the input array, but sorted in asceding order
void insertion_sort(int input[],int inputSize){
	//Array of sizes less than 2 are trivially sorted
	if(inputSize < 2){
		return;
	}
	for (int i=1; i<inputSize; i++){
		int temp = input[i];
		int j=i;
		while(input[j-1] > temp && j>0){
			input[j] = input[j-1]; //shifts the element to right
			j--;
		}
		input[j] = temp;
	}
}