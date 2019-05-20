#Overview

Quick sort is a divide and conquer algorithm.Here a vector of pairs is declared globally and the functions quick sort and partitions are defined.

The input is taken from the user and the quick sort function is called.

#QuickSort

THe function has two arguments left and right.Until left is less than right,the following steps are done.

1)The first element of the array is chosen as pivot and partition function is called
which returns the position of pivot in the sorted array.

2)Then , the quick sort algorithm is recursively called on the left and right partitions

#Partition

This function return the position of pivot in the sorted array.

Every element is compared with the pivot.If it is lesse,it is swapped and brought to the front and if it is more it is left in its own place.

The pivot is then swapped to its correct position and its index is returned.


#Time complexity
The time complexity of quick sort is O(n^2) in worst case and O(nlgn) in average case.
