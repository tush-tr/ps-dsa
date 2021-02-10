# Bit Manipulation Algorithms
First of all we will talk about what are bits,blocks that store data in binary form in the memory.

1 byte = 8 bits

## How data is stored in bits
data = 5

binary code = 101

<table>

<tr>
<td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 1</td><td> 0</td><td> 1  </td>
</tr>
</table>

## Bitwise operators
<table>
<tr><td>a</td><td>b</td><td>& (AND)</td><td>| (OR)</td><td>^ (XOR)</td></tr>
<tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr>
<tr><td>0</td><td>1</td><td>0</td><td>1</td><td>1</td></tr>
<tr><td>1</td><td>0</td><td>0</td><td>1</td><td>1</td></tr>
<tr><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td></tr>

</table>

### Right Shift operator(>>)
5 >> 1 <br>
<table>
<tr>
<td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 1</td><td> 0</td><td> 1  </td>
</tr>
<tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td></tr>

</table>

### Left Shift Operator(<<)
5 << 1
<table>

<tr>
<td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 1</td><td> 0</td><td> 1  </td>
</tr>
<tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr>

</table>

## Important Points
### **<a href="rightshift.cpp">Using right shift operator instead of deviding by 2</a>**
whenever we right shift any integer using right shift operator one time, we devide it by 2.<br>
5 = 101<br>
5>>1 = 010 = 2<br>
2>>1 = 001 = 1<br>
Ex:-
```C++
n = n>>1; // we are using right shift operator without using n /= 2
```
### **<a href="leftshift.cpp">Using left shift operator instead of multiplying by 2</a>**

Similarly whenever we left shift any integer using left shift operator one time , we multiply it by 2.
<br>
<pre>
1 = 001 
1<<1 = 010 = 2
2<<1 = 100 = 4 </pre>
```C++
n = n<<1; // insted of n *=2
```

## XOR Operator Properties
### 1.<pre> n ^ n = 0</pre>
### 2.<pre> 0 ^ n = n</pre>

## Tricks with bits
<br>x & (x-1) will clear the lowest set bit of x
<br>x & ~(x-1) extracts the lowest set bit of x (all others are clear). Pretty patterns when applied to a linear sequence.
<br>x & (x + (1 << n)) = x, with the run of set bits (possibly length 0) starting at bit n cleared.
<br>x & ~(x + (1 << n)) = the run of set bits (possibly length 0) in x, starting at bit n.
<br>x | (x + 1) = x with the lowest cleared bit set.
<br>x | ~(x + 1) = extracts the lowest cleared bit of x (all others are set).
<br>x | (x - (1 << n)) = x, with the run of cleared bits (possibly length 0) starting at bit n set.
<br>x | ~(x - (1 << n)) = the lowest run of cleared bits (possibly length 0) in x, starting at bit n are the only clear bits.

## <li> <a href="impfunctions.cpp">Important functions for bit manipulation</a>
```C++
#include<iostream>
using namespace std;
int getbit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
int setbit(int n,int pos){
    n = n | (1<<pos);
    return n;
}
int clearbit(int n, int pos){
    return n & (~(1<<pos));
}
int countsetbits(int n){
    // n & (n-1) will clear rightmost set bit
    int result = 0;
    while(n>0){
        result++;
        n = n& (n-1);
    }
    return result;
}
int findNonRepeatingElement(int arr[],int length){
    int result = 0;
    for(int i=0;i<length;i++){
        result = result ^ arr[i];
    }
    return result;
}

int main(){
    cout<<getbit(5,1)<<endl; // 5 - 101 - output - 0
    cout<<setbit(5,1)<<endl; // 5 - 101 after setbit - 111 output - 7
    cout<<clearbit(7,1)<<endl; // 7 - 111 after clear bit - 101 output - 5
    cout<<countsetbits(5)<<endl; // 5 - 101 output - 2
    int arr[7] = {5,4,1,4,3,5,1};
    cout<<findNonRepeatingElement(arr,7)<<endl; // output - 3
}
```



## Questions
<ol>
<li><a href="evenodd.cpp">Check even odd number without using % operator.</a></li>

<li><a href="swap.cpp">Swap two numbers using bitwise operators.</a></li>

<li><a href="getbit.cpp">Get bit at ith position</a></li>

<li><a href="setbit.cpp">Set bit at ith position</a></li>



<li><a href="clearbit.cpp">Clear the bit at ith position</a></li>

<li><a href="numberofbits1.cpp">Find number of bits to change to convert a to b</a></li>

<li><a href="numberofbits2.cpp">Find number of bits to change to convert a to b, Approach 2 - using- n & (n-1)</a></li>

<li><a href="trailingzero.cpp">Given an integer A, count and return the number of trailing zeroes.</a></li>

<li><a href="find-nonrepeating.cpp">Find the only non repeating element in an array where element repeat twice.</a></li>

<li><a href="find-two-nonrepeating.cpp">Find the two non-repeating elements in an array where every element repeats twice.</a></li>

<li><a href="find-nonrepeating-thrice.cpp">Find the only repeating element in an array where every other element repeats thrice.</a></li>

</ol>