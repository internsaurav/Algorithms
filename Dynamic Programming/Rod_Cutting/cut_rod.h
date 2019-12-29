#ifndef CUT_ROD_H
#define CUT_ROD_H

struct solution {
	int max_revenue;
	int num_cuts;
	int* cuts;
};

//n = length of the rod
//p = prices, an array of length n
void cut_rod(int* p, int n);

#endif