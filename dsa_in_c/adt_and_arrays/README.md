# Abstract Data Types & Arrays
ADTs are the way of classifying data structures by providing a minimal expected interface and set of methods.

## Array – ADT
An array ADT holds the collection of given elements (can be int, float, custom) accessible by an index.
<br>
1. Minimal functionality:<br>
<ul>
<li>get ( i ) – get element i</li>
<li>set ( i, num ) – set element i to num.</li>
</ul>
2. Operations:-<br>
<ul>
<li>Max()</li>
<li>Min()</li>
<li>Search ( num )</li>
<li>Insert ( i, num )</li>
<li>Append (x)</li></ul>

## Static and Dynamic Arrays:
Static arrays – Size cannot be changed
<br>
Dynamic arrays – Size can be changed
<br><br>
Quick Quiz- 
<a href="arrayadt.c">
Code the operations mentioned above in C language by creating array ADT using structures.
</a>

## Memory Representations of Array
<br>

Elements in an array are stored in contiguous memory locations.
<br>
Elements in an array can be accessed using the base address in constant time → O (1).

# Operations on an Arrray
following operations are supported by an array.
<ul>
<li>Traversal</li>
<li>Insertion</li>
<li>Deletion</li>
<li>Search</li>

</ul>
There can be many other operations, one can perform on arrays as well. like-- sorting.

## Traversal
Visiting every element of an array once is traversal.
### Why traversal?
For use cases like:--
<br>
-- storing all elements -- using scanf
<br>
-- printing all elements -- using printf
<br>

### Note:-
