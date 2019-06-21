#include "max_subarray.h"
#define CATCH_CONFIG_MAIN
#include "./../catch.hpp"
#include <iostream>
using namespace std;

TEST_CASE( "single element") {

	//single element
	int input[1] = {20};
	int inputSize = 1;

	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 0);
	CHECK(result.endIndex == 0);
	CHECK(result.sum == 20);
}

TEST_CASE( "2 same elements") {

	//2 same elements
	int input[2] = {20,20};
	int inputSize = 2;
	
	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 0);
	CHECK(result.endIndex == 1);
	CHECK(result.sum == 40);

}

TEST_CASE( "3") {

	//2 same elements
	int input[3] = {2,3,-1};
	int inputSize = 3;
	
	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 0);
	CHECK(result.endIndex == 1);
	CHECK(result.sum == 5);

}

TEST_CASE( "4") {

	//2 same elements
	int input[5] = {-5,2,3,-1,0};
	int inputSize = 5;
	
	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 1);
	CHECK(result.endIndex == 2);
	CHECK(result.sum == 5);

}

TEST_CASE( "5") {

	//2 same elements
	int input[5] = {-5,2,3,-1,1};
	int inputSize = 5;
	
	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 1);
	CHECK(result.endIndex == 2);
	CHECK(result.sum == 5);

}

TEST_CASE( "6") {

	//2 same elements
	int input[5] = {0,0,0,0,0};
	int inputSize = 5;
	
	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 0);
	CHECK(result.endIndex == 0);
	CHECK(result.sum == 0);

}

TEST_CASE( "7") {

	//2 same elements
	int input[5] = {1,2,3,4,5};
	int inputSize = 5;
	
	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 0);
	CHECK(result.endIndex == 4);
	CHECK(result.sum == 15);

}

TEST_CASE( "8") {

	//2 same elements
	int input[5] = {0,2,3,4,5};
	int inputSize = 5;
	
	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 1);
	CHECK(result.endIndex == 4);
	CHECK(result.sum == 14);

}

TEST_CASE( "9") {

	//2 same elements
	int input[5] = {-1,-1,-1,-1,-1};
	int inputSize = 5;
	
	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 0);
	CHECK(result.endIndex == 0);
	CHECK(result.sum == -1);

}

TEST_CASE( "10") {

	//2 same elements
	int input[5] = {-1,-1,-1,0,-1};
	int inputSize = 5;
	
	subarrayData result = max_subarray(input, inputSize);
	CHECK(result.startIndex == 3);
	CHECK(result.endIndex == 3);
	CHECK(result.sum ==0);

}