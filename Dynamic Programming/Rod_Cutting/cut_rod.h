#ifndef CUT_ROD_H
#define CUT_ROD_H

#include <vector>

struct rod_cut_solution {
	int max_revenue;
	std::vector<int> cuts;
};

//n = length of the rod
//p = prices, an array of length n
rod_cut_solution* cut_rod(int* p, int n);

#endif