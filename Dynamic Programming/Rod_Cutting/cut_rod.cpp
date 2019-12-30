#include "cut_rod.h"
#include <cstddef>

void build_solution(rod_cut_solution* sol, int* opt_first_cut_piece_length, int n){
	while(n>0){
		(sol->cuts).push_back(opt_first_cut_piece_length[n-1]);
		n -= opt_first_cut_piece_length[n-1];
	}
}

rod_cut_solution* cut_rod(int* prices, int n){
	rod_cut_solution* sol = new rod_cut_solution();
	sol->max_revenue = 0;

	if(n==0)
		return sol;

	if(n==1){
		sol->max_revenue = prices[0];
		(sol->cuts).push_back(1);
		return sol;
	}

	//solution to subproblem of length x is saved at index x-1
	int* opt_revenue = new int[n]();
	int* opt_first_cut_piece_length = new int[n]();

	for(int rod_length=1; rod_length<=n; rod_length++){
		opt_revenue[rod_length-1] = prices[rod_length-1];
		opt_first_cut_piece_length[rod_length-1] = rod_length;
		
		for(int first_cut_piece_length=1; first_cut_piece_length < rod_length; first_cut_piece_length++){
			int this_revenue = prices[first_cut_piece_length-1] + opt_revenue[rod_length - first_cut_piece_length-1];
			if (this_revenue > opt_revenue[rod_length-1]){
				opt_revenue[rod_length-1] = this_revenue;
				opt_first_cut_piece_length[rod_length-1] = first_cut_piece_length;
			}
		}
	}

	sol->max_revenue = opt_revenue[n-1];
	build_solution(sol, opt_first_cut_piece_length, n);
	delete[] opt_revenue;
	delete[] opt_first_cut_piece_length;
	return sol;
}