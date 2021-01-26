# All about bit manipulation
First of all we will talk about what are bits,blocks that store data in binary form in the memory.

1 byte = 8 bits

## how data is stored in bits
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

<li><a href=""></a></li>

```C++
```
<li><a href=""></a></li>

```C++
```

</ol>