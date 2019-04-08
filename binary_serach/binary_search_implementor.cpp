#include <iostream>
#include <string>
#include <fstream>
#include "binary_search.h"
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

int main(int argc, char **argv){

	string line_unmodified;
	string numToSearchStr;
	string arrLengthStr;
	ifstream infile(argv[1]);
	int *input;
	while (getline(infile, arrLengthStr)){
		getline(infile, line_unmodified);
		getline(infile, numToSearchStr);
		int numToSearch = stoi(numToSearchStr);
		int arrLength = stoi(arrLengthStr);
		stringToAray(line_unmodified, &input);
		if (input != nullptr){
			cout << "searching for "<< numToSearch << " in " << line_unmodified << ": " << binary_search(input, arrLength, numToSearch) << endl;
			delete[] input;
		}
	}
	return 0;
}