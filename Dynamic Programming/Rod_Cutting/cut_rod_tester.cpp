#include "cut_rod.h"
#include <iostream>

void printResult(rod_cut_solution* sol, int expected_revenue){
	if(sol != NULL && sol->max_revenue == expected_revenue){
		std::cout << "Passed\n";
	} else {
		std::cout << "Failed: Expected = " << expected_revenue << " & Actual = ";
		if(sol == NULL){
			std::cout << "NULL\n";
		} else {
			std::cout << sol->max_revenue << "\n";
		}
	}
}

void max_revenue_test_case(int n, int* p, int expected_revenue, int caseNum){
	std::cout << "Case " << caseNum << ": ";
	rod_cut_solution* sol = cut_rod(p, n);
	printResult(sol, expected_revenue);
}

void max_revenue_test_cases(){
	int caseNum = 0;
	int n = -1;
	int expected_revenue = -1;
	int p[10] = {1,5,8,9,10,17,17,20,24,30};

	n = 0;
	expected_revenue = 0;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 1;
	expected_revenue = 1;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 2;
	expected_revenue = 5;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 3;
	expected_revenue = 8;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 4;
	expected_revenue = 10;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 5;
	expected_revenue = 13;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 6;
	expected_revenue = 17;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 7;
	expected_revenue = 18;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 8;
	expected_revenue = 22;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 9;
	expected_revenue = 25;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);

	n = 10;
	expected_revenue = 30;
	max_revenue_test_case(n, p, expected_revenue, ++caseNum);
}

int main(){
	max_revenue_test_cases();
	return 0;
}