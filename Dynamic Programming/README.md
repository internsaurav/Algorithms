<h2>Dynamic Programming</h2>
<p>Dynamic programming typically applies to optimization problems where we make a set of choices in order to arrive at an optimal solution. As we make choice at each step, a subproblem of same form (as the original) arises.</p>
<p>
	Optimization problems are usually recursive in nature. However, naive recursion might lead to an exponential runtime. Dynamic Programming avoids this by saving the solution to smaller subproblems and using them to computer solution to larger ones. Basically, it uses <b><i>memory</i></b> to save <b><i>time</i></b>.
</p>
<p>
	2 approaches to save subproblem solutions:
	<ul>
		<li><b><u>Memoization</u></b>: Naive recursion + saving solution to subproblems in memory, as and when they are solved. Memory is checked to see if solution to a subproblem is available before solving it.</li>
		<li><b><u>Bottom-Up approach</u></b>: All subproblems to a problem are solved in an increasing-order. Higher subproblems use the solution to lower subproblems. </li>
	</ul>
	Both approaches solve a sub-problem exactly once and have same asymptotic runtime. In practice, bottom-up approach has better constant factors. Memoization runs faster when <b><i>not all subproblems are explored.</i></b>
</p>
<p> <h4>Basic steps in developing Dynamic Programming algorithm:</h4>
	<ol>
		<li>Characterize the structure of an optimal solution.</li>
		<li>Recursively define the value of an optimal solution.</li>
		<li>Compute the value of an optimal solution. </li>
		<li>Construct the steps to an optimal solution.</li>
	</ol>
</p>
