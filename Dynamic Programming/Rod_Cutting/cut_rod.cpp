#include "cut_rod.h"
#include <cstddef>
// #include <climits>

rod_cut_solution* cut_rod(int* prices, int n){
	rod_cut_solution* sol = new rod_cut_solution();
	sol->max_revenue = 0;
	sol->num_cuts = -1;
	sol->cuts = NULL;

	if(n==0)
		return sol;

	if(n==1){
		sol->max_revenue = prices[0];
		return sol;
	}

	//solution to subproblem of length x is saved at index x-1
	int* opt_revenue = new int[n]();

	for(int rod_length=1; rod_length<=n; rod_length++){
		opt_revenue[rod_length-1] = prices[rod_length-1];
		
		for(int first_cut_piece_length=1; first_cut_piece_length < rod_length; first_cut_piece_length++){
			int this_revenue = prices[first_cut_piece_length-1] + opt_revenue[rod_length - first_cut_piece_length-1];
			if (this_revenue > opt_revenue[rod_length-1])
				opt_revenue[rod_length-1] = this_revenue;
		}
	}

	sol->max_revenue = opt_revenue[n-1];
	delete[] opt_revenue;
	return sol;
}