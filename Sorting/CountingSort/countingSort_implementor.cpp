#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include "countingSort.h"
using namespace std;

void printArray(int* arr, int length, bool verifySorting){
	bool sorted = true;
	cout << "[";
	for(int i=0; i<length; i++){
		cout << arr[i] << ",";
		if(i != 0 && arr[i] < arr[i-1])
			sorted = false;
	}
	cout << "]\n";

	if(verifySorting == true)
		cout << "Sorted: " << sorted << "\n";
}

void testCase(int* unsorted, int length, int caseNum){
	cout << "Test Case " << caseNum <<"\n";
	cout << "---------------\n";
	cout << "Before Sorting:\n";
	printArray(unsorted,length, false);
	int* sorted = new int[length];
	countingSort(unsorted,sorted,length);
	cout << "After Sorting:\n";
	printArray(sorted, length, true);
	cout << "==========================\n";
	delete[] sorted;
}

void generateRandomArray(int* empty, int length){
	//for counting sort, range needs to be O(length)
	int rangePositive = 2*length; 
	srand (time(NULL));
	for (int i=0; i<length; i++){
		empty[i] = (rand() % rangePositive) *  ((rand() < RAND_MAX/2) ? -1 : 1);
	}
}

void basicTestCases(){
	cout << "BASIC TEST CASES\n================\n";
	int caseNum = 0;
	int length = 1;
	int* unsorted = NULL;
	unsorted = new int[length];
	unsorted[0] = 1;
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 2;
	unsorted = new int[length];
	unsorted[0] = 1;
	unsorted[1] = 1;
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 2;
	unsorted = new int[length];
	unsorted[0] = 1;
	unsorted[1] = 2;
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 2;
	unsorted = new int[length];
	unsorted[0] = 2;
	unsorted[1] = 1;
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 3;
	unsorted = new int[length];
	unsorted[0] = 2;
	unsorted[1] = 1;
	unsorted[2] = 1;
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 3;
	unsorted = new int[length];
	unsorted[0] = 2;
	unsorted[1] = 1;
	unsorted[2] = -1;
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 5;
	unsorted = new int[length];
	unsorted[0] = 6;
	unsorted[1] = 6;
	unsorted[2] = 6;
	unsorted[3] = 6;
	unsorted[4] = 6;
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 5;
	unsorted = new int[length];
	unsorted[0] = 4;
	unsorted[1] = 5;
	unsorted[2] = 2;
	unsorted[3] = 1;
	unsorted[4] = 3;
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 6;
	unsorted = new int[length];
	unsorted[0] = 4;
	unsorted[1] = 5;
	unsorted[2] = 2;
	unsorted[3] = 1;
	unsorted[4] = 3;
	unsorted[5] = 1;
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	cout << "\n";
}

void level1TestCases(){
	cout << "LEVEL 1 TEST CASES\n==================\n";
	int caseNum = 0;
	int length = 50;
	int* unsorted = NULL;
	unsorted = new int[length];
	generateRandomArray(unsorted, length);
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 500;
	unsorted = new int[length];
	generateRandomArray(unsorted, length);
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 5000;
	unsorted = new int[length];
	generateRandomArray(unsorted, length);
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;

	length = 50000;
	unsorted = new int[length];
	generateRandomArray(unsorted, length);
	testCase(unsorted, length, ++caseNum);
	delete[] unsorted;
}

int main(){
	// basicTestCases();
	level1TestCases();
	return 0;
}

