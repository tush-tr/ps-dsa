# Dynamic Memory Allocation
## Stack Memory Allocation
The memory is allocated on the function call stack. The memory gets deallocated
as soon as the function call gets over. Deallocation is handled by the compiler.
## Heap Memory Allocation
Allocation takes place on the pile of memory space available to programmers to
allocated and de-allocate. The programmer has to handle the deallocation.
NOTE: It is different from the heap data structure.
## Delete Operator
To de-allocate a memory p, we pass its address to the delete() function.
```C++
// to deallocate a memory
// pointed to pointer p
delete(p)
```
## New Operator:
New operator is used to allocate a block of memory of the given data type.

```C++
// mypointer = new <datatype>[size]
int *p = new int[10];
// to delete memory for array
delete[]p;
```



## Dangling Pointer
If the memory location pointed by the pointer gets freed/ deallocated, then the
pointer is known as the Dangling Pointer.

## What if enough memory is not available during runtime?
If enough memory is not available in the heap to allocate, the new request indicates failure by throwing an exception of type std::bad_alloc, unless “nothrow” is used with the new operator, in which case it returns a NULL pointer.
```C++
int *p = new(nothrow) int;
if (!p)
{
   cout << "Memory allocation failed\n";
}
```


## Practice Questions:
1. <a href="que1.cpp">Declare a 2D array Dynamically.</a>
2. <a href="que2.cpp">Declare a 3D array Dynamically.</a>
3. <a href="que3.cpp">MCQs on Dynamic Memory Allocation.</a>

