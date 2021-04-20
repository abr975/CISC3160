quicksort.rs
Quicksort is a divide and conquer algorithm where you want to sort based off of a pivot element.    LEFT | PIVOT | RIGHT
Line 8 get the mid point from calling partition function on the v
Line 11-17 we recursively call the quicksort on the left and right elements

mergesort.rs
Mergesort is a divide and conquer algorithm where you break elements down until they are a single element and then you build
them back up in a sorted order.
Line 3 we call mergesort on v merge sort then sets the mid to the midpoint of the array 
Line 13-14 we call mergesort recursively on everything to the left and right of the midpoint
Line 17 we create a array to store values
Line 20 we merge back the elements in sorted order


insertionsort.rs
Insertion sort is a simple algorithm that builds the final sorted aray one item at a time.
We loop over the array and with 2 pointers and perform a swap if the trailing pointer is bigger.