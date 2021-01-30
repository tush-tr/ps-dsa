# Bit Manipulation Algorithms
First of all we will talk about what are bits,blocks that store data in binary form in the memory.

1 byte = 8 bits

## How data is stored in bits
data = 5

binary code = 101

<table>
<tr></tr>
<tr>
<td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 1</td><td> 0</td><td> 1  </td>
</tr>
<tr><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
</table>

## Bitwise operators
<table>
<tr>
<tr><td>a</td><td>b</td><td>& (AND)</td><td>| (OR)</td><td>^ (XOR)</td></tr>
<tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr>
<tr><td>0</td><td>1</td><td>0</td><td>1</td><td>1</td></tr>
<tr><td>1</td><td>0</td><td>0</td><td>1</td><td>1</td></tr>
<tr><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td></tr>
<tr><td></td><td></td><td></td><td></td><td></td>
</table>

### Right Shift operator(>>)
5 >> 1 <br>
<table>
<tr></tr>
<tr>
<td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 1</td><td> 0</td><td> 1  </td>
</tr>
<tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td></tr>
<tr><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
</table>

### Left Shift Operator(<<)
5 << 1
<table>
<tr></tr>
<tr>
<td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 0</td><td> 1</td><td> 0</td><td> 1  </td>
</tr>
<tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr>
<tr><td></td><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>
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


## Questions
<ol>
<li><a href="evenodd.cpp">Check even odd number without using % operator.</a></li>

```C++
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n&1)==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}
```
<li><a href="swap.cpp">Swap two numbers using bitwise operators.</a></li>

```C++
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the value of a: ";
    cin>>a;
    cout<< "Enter the value of b: ";
    cin>>b;

    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    return 0;
}
```

<li><a href="getbit.cpp">Get bit at ith position</a></li>

```C++
int getbit(int n, int i){
    int mask = 1<<i;
    return (n & mask);
}
```
<li><a href="setbit.cpp">Set bit at ith position</a></li>

```C++
int setbit(int n, int i){
    int mask = 1<<i;
    n = n|mask;
    return n;
}
```

<li><a href="clearbit.cpp">Clear the bit at ith position</a></li>

```C++
int clearbit(int n, int pos)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return n;
}
```
<li><a href="numberofbits1.cpp">Find number of bits to change to convert a to b</a></li>

```C++
// TODO: Find number of bits to change to convert a to b.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    // TODO: Check how many bits are different using XOR operator
    int n = a ^ b;
    // TODO: Find how many set bits are there in a binary number n
    // Approach: right shift the number till it becomes zero
    int count = 0;
    while(n!=0){
        int check = n & 1;
        if(check ==1){
            count++;
        }
        n = n>>1;
    }
    // _______________ Time Complexity of this approach - log n
    cout<<count<<endl;
}
```
<li><a href="numberofbits2.cpp">Find number of bits to change to convert a to b, Approach 2 - using- n & (n-1)</a></li>

```C++
// TODO: Find number of bits to change to convert a to b.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    // TODO: Check how many bits are different using XOR operator
    int n = a ^ b;
    // TODO: Find how many set bits are there in a binary number n
    // Approach: clear least set bit till it becomes zero using -- n & (n-1)
    int count = 0;
    while(n!=0){
        count++;
        n = n & (n-1);
    }
    cout<<count<<endl;
}
```
<li><a href="trailingzero.cpp">Given an integer A, count and return the number of trailing zeroes.</a></li>

```C++
#include <iostream>
using namespace std;
int main()
{
    int A;
    cin >> A;
    int count = 0;
    while (A != 0)
    {
        int check = A & 1;
        cout << check << endl;
        if (check == 0)
        {
            count++;
        }
        else
        {
            break;
        }
        A = A >> 1;
    }
    cout << count << endl;
}
```
<li><a href="find-nonrepeating.cpp">Find the only non repeating element in an array where element repeat twice.</a></li>

```C++
#include<iostream>
using namespace std;
int main(){
    int a[7] = {5,4,1,4,3,5,1};
    int result = 0;
    for(int i=0;i<7;i++){
        result = result^a[i];
    }
    cout<<result<<endl;
}
```
<li><a href="find-two-nonrepeating.cpp">Find the two non-repeating elements in an array where every element repeats twice.</a></li>

```C++
#include<iostream>
using namespace std;
int main(){
    int a[8] ={5,4,1,4,3,5,1,2};
    // TODO: Get the XOR of all of elements in the array
    int res = 0;
    for(int i=0;i<=7;i++){
        res = res^a[i];
    }
    cout<<"XOR of array: "<<res<<endl;
    // TODO: get the right most set bit in the res
    int rightmost = res & ~(res-1);

    cout<<"Rightmost bit in array: "<<rightmost<<endl;

    // TODO: devide array elements comparing rightmost set bit of res with bit 
    // at same position in each element.
    int x = 0;
    for(int i=0;i<7;i++){
        if(a[i]&rightmost){
            x = x^a[i];
        }

    }
    cout<<"XOR of first set: "<<x<<endl;
    cout<<"______Results_________"<<endl;
    int result1 = res^x;
    int result2 = res^result1;
    cout<<result1<<endl<<result2<<endl;
}
```
<li><a href="find-nonrepeating-thrice.cpp">Find the only repeating element in an array where every other element repeats thrice.</a></li>

```C++

```
</ol>