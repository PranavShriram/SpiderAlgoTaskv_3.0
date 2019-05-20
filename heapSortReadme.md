#Overview

In the heap sort algorithm ,a class is declared.
The class has a vector of pair as one of its components and in public four functions input ,heapify ,build max heap and heap sort are declared.

#Input

In the input function ,input is taken from the user for the vector of pairs by creating an object of the class.

#Heapify

A complete binary tree is a tree where every node has either two children or no children.


The array is visualised as a complete binary tree and is sorted.

The heapify function builds a max heap where every node is such that it is greater than its children.

Starting from a complete binary tree, we can modify it to become a Max-Heap by running a function called heapify on all the non-leaf elements of the heap.

Heapfiy uses recursion to buid a max heap.

The basic underlying concept is that when a node is considered ,the trees of its children are considered to be max heaps and the node is swapped with the greater of its two children and build max heap is called on the swapped child.

Hence, a max heap is built .

THe time complexity of build max heap if the entire array is considered is O(n) and not O(nlgn)

This is because a heap of size n can have atmost Least Integer(n/2^(h+1)) nodes at height h and if take summation for each node we get O(n).

#Heap sort

In heap sort procedure ,heapify procedure is called upon the n/2 non leaf nodes to build a max heap.After the max heap is built ,the node ar 0th index which is the root node is swapped with the last element and heapify is against called on root node to maintain loop invariance .

After this this produre is repeated by reducing th size of tree on which heapfy as called and in the end , we have an array sorted in ascending order.

The time complexity of the heap sort function is O(nlgn) as it is called on every node and each node can have a height of atmost lgn


#Time complexity

Hence the overall asymptotic time complexity is O(nlgn + n) which is O(nlgm)
