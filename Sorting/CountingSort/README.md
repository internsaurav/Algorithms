# Counting Sort
Counting sort is a sorting method which runs in linear time when input is restricted to following:<br/>
1. Input elements consist of integers <i>i</i> 	&isin; I, such that, 0 &le; <i>i</i> &le; k<br/>
2. k = O(n) , n = number of elements<br/>
<br/><br/>
<b>Advantage</b>: Runs in linear time (under above restrictions)<br/>
<b>Disadvantages</b>:<br/>
1. Needs a ton of space &asymp; 3*n<br/>
2. Actual runtime is O( n + k ) <br/>
<br/><br/>
### To handle negative integers:
1. <b> PreProcessing</b>: let <i>i<sub>min</sub></i> be the minimum integer in the array. (This is a negative integer). Subtract <i>i<sub>min</sub></i> from all integers in the array. This makes the all integers positive.
2. ##### Invoke CountingSort.
3. <b>  PostProcessing</b>: Add <i>i<sub>min</sub></i> to all integers in the array to recover the original numbers.
