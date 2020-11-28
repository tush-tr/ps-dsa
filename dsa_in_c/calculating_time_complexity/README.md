# Techniques to calculate Time Complexity
Once we are able to write the runtime in terms of the size of the input (n), we can find the time complexity.
<pre>
For example,           T(n) = n2 → O (n2)

                       T(n) = log n → O (log n)

 </pre>

## Some tricks to calculate the complexity
<ul>
<li>Drop the constants: Anything you might think is O(3n) is O(n) [Better Representation]</li>
<li>Drop the non-dominant terms: Anything you represent as O(n2+n) can be written as O(n2)</li>
<li>Consider all variables which are provided as input: O (mn) and O (mnq) might exist for some cases.</li>
 </ul>

In most cases, we try to represent the runtime in terms of the input which can be more than one in number. For example,
<br>
Painting a park of dimension m * n → O (mn)
<br>

# Time Complexity – Competitive Practice Sheet
<ol>
<li><a href="que1.c">Find the time complexity of the func1 function in the program show in que1.c</a></li>
<li><a href="que2.c">Fine the time complexity of the func function in the program from que2.c</a></li>
<li><a href="que3.c">Consider the recursive algorithm, where the random(int n) spends one unit of time to return a
random integer which is evenly distributed within the range [0,n][0,n]. If the average processing time
is T(n), what is the value of T(6)?</a></li>
<li><a href="que4.c">
Which of the following are equivalent to O(N)? Why?<br>
<br>
a) O(N + P), where P < N/9<br>
b) 0(9N-k)<br>
c) O(N + 8log N)<br>
d) O(N + M2)</a></li>
<li><a href="que5.c">This simple code sums the values of all the nodes in a balanced binary search tree. What is its
runtime? </a></li>
<li><a href="que6.c">Find the complexity of this code which tests whether a give number is prime or not?

</a></li>
<li><a href="que7.c">What is the time complexity of this snippet of code?</a></li>
</ol>