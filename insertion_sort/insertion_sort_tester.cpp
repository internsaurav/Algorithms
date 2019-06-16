#include "insertion_sort.h"
#define CATCH_CONFIG_MAIN
#include "./../catch.hpp"
#include <iostream>
#include <algorithm>
using namespace std;

TEST_CASE( "single element") {

	//single element
	int input[1] = {20};
	int inputSize = 1;
	vector<int> expectedResult = {20};
	int inputCopy[1];
	for(int i=0; i<inputSize; i++){
		inputCopy[i] = input[i];
	}
	insertion_sort(inputCopy, inputSize);
	vector<int> actualResult(inputCopy, inputCopy + inputSize);
	CHECK(actualResult == expectedResult);
}

TEST_CASE( "2 same elements") {

	

	//2 same elements
	int input[2] = {20,20};
	int inputSize = 2;
	vector<int> expectedResult = {20,20};
	int inputCopy[2];
	for(int i=0; i<inputSize; i++){
		inputCopy[i] = input[i];
	}
	insertion_sort(inputCopy, inputSize);
	vector<int> actualResult(inputCopy, inputCopy + inputSize);
	CHECK(actualResult == expectedResult);


}

TEST_CASE( "2 unsorted") {


	//2 elements
	int input[2] = {38,20};
	int inputSize = 2;
	vector<int> expectedResult = {20,38};
	int inputCopy[2];
	for(int i=0; i<inputSize; i++){
		inputCopy[i] = input[i];
	}
	insertion_sort(inputCopy, inputSize);
	vector<int> actualResult(inputCopy, inputCopy + inputSize);
	CHECK(actualResult == expectedResult);


}

TEST_CASE( "Insertion Sort -- Trivial cases") {

	//already sorted
	int input[2] = {20,38};
	int inputSize = 2;
	vector<int> expectedResult = {20,38};
	int inputCopy[2];
	for(int i=0; i<inputSize; i++){
		inputCopy[i] = input[i];
	}
	insertion_sort(inputCopy, inputSize);
	vector<int> actualResult(inputCopy, inputCopy + inputSize);
	CHECK(actualResult == expectedResult);

}

TEST_CASE( "Insertion Sort -- General Cases 1") {
	int input[5] = {1,2,3,4,5};
	int inputSize = 5;
	vector<int> expectedResult = {1,2,3,4,5};
	do {
		int inputCopy[5];
		for(int i=0; i<inputSize; i++){
			inputCopy[i] = input[i];
		}
		insertion_sort(inputCopy, inputSize);
		vector<int> actualResult(inputCopy, inputCopy + inputSize);
		CHECK(actualResult == expectedResult);

	} while (next_permutation(input,input+inputSize));
}

TEST_CASE( "Insertion Sort -- General Cases 2") {
	int input[5] = {100000,20,3,-4,5855};
	int inputSize = 5;
	vector<int> expectedResult = {-4,3,20,5855,100000};
	do {
		int inputCopy[5];
		for(int i=0; i<inputSize; i++){
			inputCopy[i] = input[i];
		}
		insertion_sort(inputCopy, inputSize);
		vector<int> actualResult(inputCopy, inputCopy + inputSize);
		CHECK(actualResult == expectedResult);

	} while (next_permutation(input,input+inputSize));
}