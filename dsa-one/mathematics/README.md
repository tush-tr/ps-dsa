# Mathematics
<ol>
<li><a href="factorial.cpp">Find factorial of a given number </a></li>
<li><a href="trailingzero.cpp">Find number of trailng zeros in factorial of a number.</a></li>
<hr>

## Sieve of Eratosthenes
calculating prime number till n -- 
<br>
check 1 to square root of n
<br>
The sieve of eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 millian or so.
<br>
Let n = 12<br>
square root of 12 = 3(approximately) so we will set multiples false of numbers till 3.
<table>
<tr>
<td>1</td>
<td>2</td>
<td>3</td>
<td>4</td>
<td>5</td>
<td>6</td>
<td>7</td>
<td>8</td>
<td>9</td>
<td>10</td>
<td>11</td>
<td>12</td>
</tr>
<tr>
<td>False</td>
<td>True</td>
<td>True</td>
<td>True</td>
<td>True</td>
<td>True</td>
<td>True</td>
<td>True</td>
<td>True</td>
<td>True</td>
<td>True</td>
<td>True</td>
</tr>
<tr>
<td>False</td>
<td>True</td>
<td>True</td>
<td>False</td>
<td>True</td>
<td>False</td>
<td>True</td>
<td>False</td>
<td>False</td>
<td>False</td>
<td>True</td>
<td>False</td>
</tr>
</table>

<li><a href="sieve.cpp">Given a number n, print all primes smaller than or equal to n.</a></li>
<hr>

## Euclid GCD
GCD of two numbers is the largest number that divides both of them. A simple way to find GCD is to factorize both numbers and multiply common prime factors.
<br>

### **Basic Euclidean Algorithm for GCD.** 
The algorithm is based on the below facts. 
<ul>
<li>If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
<li>Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.
</ul>
<li><a href="gcd.cpp"> A recursive function to evaluate gcd using Euclid’s algorithm </a></li>
<li><a href=""> </a></li>
<li><a href=""> </a></li>
<li><a href=""> </a></li>
</ol>