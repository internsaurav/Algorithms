#include <iostream>
#include <string>
#include <fstream>
#include "./../binary_serach/binary_search.h"
using namespace std;


//creates an array at location pointed by arr using the integers conatined in arrayString
void stringToAray(string arrayString, int ** arr){
	string delimiter = ",";
	size_t pos = 0;
	string token;
	int i = 0;
	string line = arrayString;
	while ((pos = line.find(delimiter)) != string::npos) {
		i++;
	    line = line.substr(pos + delimiter.length());
	}
	*arr = new int[++i];
	line = arrayString;
	i=0;
	while ((pos = line.find(delimiter)) != string::npos) {
		token = line.substr(0, pos);
		(*arr)[i] = stoi(token);
	    line = line.substr(pos + delimiter.length());
	    i++;
	}
	token = line.substr(0, pos);
	(*arr)[i] = stoi(token);
}

struct array_indices {
	int start;
	int end;
};

//if succesfull, returns the indices else -1
array_indices subArrayWithGivenSum(int arr[], int sizeOfArr, int sum){
	int NOT_FOUND = -1;
	array_indices result = {NOT_FOUND, NOT_FOUND};
	if (sizeOfArr == 1){
		if (arr[0] == sum){
			result.end=0;
			result.start=0;
		}
	} else {
		//add the numbers so that the array is monotonically increasing
		for (int i=1; i<sizeOfArr; i++){
			arr[i] += arr[i-1];
		}
		//now binary search for the sum
		for (int i=0; i<sizeOfArr; i++){
			int sumToFind = (i!=0) ? sum + arr[i-1] : sum;
			int indexFound = binary_search(i,sizeOfArr-1, arr, sumToFind);
			if (indexFound != -1) {
				result.start = i;
				result.end = indexFound;
				break;
			}
		}
	}
	return result;
}

int main(int argc, char **argv){
	string line_unmodified;
	string numToSearchStr;
	string arrLengthStr;
	string separator;
	ifstream infile(argv[1]);
	int *input;
	while (getline(infile, arrLengthStr)){
		getline(infile, line_unmodified);
		getline(infile, numToSearchStr);
		int sumToFind = stoi(numToSearchStr);
		int arrLength = stoi(arrLengthStr);
		stringToAray(line_unmodified, &input);
		if (input != nullptr){
			cout << "searching for "<< sumToFind << " in " << line_unmodified << ": "<< endl;
			array_indices indices = subArrayWithGivenSum(input, arrLength, sumToFind);
			cout << "Start: " << indices.start << ",End: " << indices.end << endl;
			delete[] input;
		}
		getline(infile, separator); // dummy just to co
	}
	return 0;
}