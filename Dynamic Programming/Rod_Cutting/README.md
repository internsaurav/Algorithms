<h2>Rod Cutting Problem:</h2>
<span>
	<h4>Given:</h4>
	<ol>
		<li>a rod of length n inches</li>
		<li>a table of prices p<sub>i</sub> for i = 1,2,...,n</li>
	</ol> 
</span>
<span>
	<h4>Problem:</h4>
	Determine the maximum revenue r<sub>n</sub> obtainable by cutting up the rod and selling the pieces. Pieces need to be od integral length.
	If the price p<sub>n</sub> for a rod of length n is large enough, an optimal solution may require no cutting at all.
</span>
<span>
	<h4>Output:</h4>
	<ol>
		<li>maximum revenue</li>
		<li>Exact cuts that result in the above</li>
	</ol>
</span>
<span>
	<h4>Approach (Bottom-Up):</h4>
	Lets say we found the optimal(max) revenue r<sub>n</sub> somehow. The first piece is of length <i>x</i>. For the solution to be optimal, the revenue from length <i>n-x</i> also needs to be optimal. So a natural recursion arises here.
	<blockquote>
		r<sub>n</sub> = p<sub>x</sub> + r<sub>n-x</sub>
	</blockquote>
	To build a solution ground up, we observe the following:
	<ul>
		<li>For <i>n=1</i>, r<sub>1</sub> = p<sub>1</sub></li>
		<li>For <i>n=2</i>, r<sub>2</sub> = max(p<sub>2</sub>, p<sub>1</sub> + r<sub>1</sub>)</li>
		<li>For <i>n=3</i>, r<sub>3</sub> = max(p<sub>3</sub>, p<sub>2</sub> + r<sub>1</sub>, p<sub>1</sub> + r<sub>2</sub>) </li>
		<li>For <i>n=4</i>, r<sub>4</sub> = max(p<sub>4</sub>, p<sub>3</sub> + r<sub>1</sub>, p<sub>2</sub> + r<sub>2</sub>, p<sub>1</sub> + r<sub>3</sub>) </li>
	</ul>
	... and so on.
	Since, the smaller subproblems are solved and memorized first, they are just looked up while solving the larger subproblems.
</span>