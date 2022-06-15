# Different Operations on array

## Basic Operations
### Display
```C++
void display(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
```
### Insertion
```C++
int insertion(int arr[],int size, int element, int capacity, int index){
        if(size>=capacity){
            return -1;
        }
        for(int i=size-1;i>=index;i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
```

### Deletion

```C++
void deletion(int arr[],int size, int index){
        for(int i=index;i<size-1;i++){
            arr[i] = arr[i+1];
        }
    }
```

## Linear Search and Binary Search

### Linear Search
A linear search scans one item at a time, without jumping to any item .

```C++
int linearSearch(int arr[],int size,int element){
        for(int i=0;i<size;i++){
            if(arr[i]==element){
                return i;
            }
        }
        return -1;
    }
```

### Binary Search
A binary search however, cut down your search to half as soon as you find middle of a sorted list.

```C++
 int binarySearch(int arr[],int size,int element){
        int low = 0;
        int high = size;
        while(low<=high){
            int mid = (high+low)/2;
            if(arr[mid]==element){
                return mid;
            }
            else if(arr[mid]>element){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
        
    }
```
<table>
<tr>
<td>Linear Search </td>
<td>Binary Search</td>
</tr>

<tr>
<td>Works on both sorted and unsorted arrays </td>
<td>Works only on sorted arrays</td>
</tr>

<tr>
<td>Equality Operations </td>
<td>Inequality operations</td>
</tr>

<tr>
<td>Time Complexity- O(N) </td>
<td>Time Complexity- O(log n)</td>
</tr>
</table>


## Problems

<ol>

<li>Majority element in an array: <a href="que1.js">JavaScript</a>,<a href="que1.cpp">CPP</a>
<li><a href="">Kadane's algo, largest sum contiguous subarray</a>
<li><a href="leetcode121">Best time to buy and sell stock to maximise profit Leetcode - 121</a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>
<li><a href=""></a>

</ol>