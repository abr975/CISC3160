quicksort.rb
Quicksort is a divide and conquer algorithm where you want to sort based off of a pivot element.    LEFT | PIVOT | RIGHT
In line 5 we get our pivot element line 6 we create left,right elements based on if it is > the pivot element
Then line 8 we recursively call Quicksort on the left and right elements.

mergesort.rb
Mergesort is a divide and conquer algorithm where you break elements down until they are a single element and then you build
them back up in a sorted order.
In line 2 we check if the array is one element if so then return its already sorted line 5-8 we recursively call mergesort 
splitting in into everything left of the midpoint in left and everything right of the midpoint in right this breaks them up to a single element
Line 8 we call merge on left and right combining them back in a sorted order

insertionsort.rb
Insertion sort is a simple algorithm that builds the final sorted aray one item at a time.
We loop over the array with 2 points i and j. j is the trailing pointer and if it is larger then we perform a swap.