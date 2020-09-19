# Insertion Sort
## Aim of the experiment:
Write a program that implements selection sorting method to sort a given list of integers in ascending order
## Description:
- Insertion sort is a simple sorting algorithm: a comparison sort in which the sorted array
(or list) is built one entry at a time.
- It is much less efficient on large lists than more advanced algorithms such as quicksort,
heapsort, or merge sort. 
## Step by Step Procedure
- We taken an array of elements.
- Insertion Sort compares the first two elements initially.
- If both the elements are already in order,then our first element is in sorted sublist.
- It then moves ahead and compares the next two elements.
- It swaps the elements if they are not sorted and compares with all elements in the sorted sub-list.
- Then it shifts all the elements in the sorted sub-list that is greater than the value to be sorted.
− Repeated until list is sorted
### OUTPUT 1:
- We take an array with 5 elements {1,19,2,35,10}
- Now we compare the first two elements 1 and 19. As they are already in ascending order the first element i.e 1 is inserted into the sorted sublist.
- Now we move to the next two elements 19 and 2.It swaps 19 with 2. It also checks with all the elements of sorted sub-list. Here we see that the sorted sub-list has only one element 1, and 2 is greater than 1. Hence, the sorted sub-list remains sorted after swapping.
- Now we have 1 and 2 in the sorted sublist.Next it compares 19 and 35.As they are in sorted order so the element 19 is inserted into the sorted sublist.
- Now we compare 35 and 10 . As they are not sorted ,we swap the numbers . It also checks with the elements in the sorted sublist.After swapping also the elements remain unsorted so we swap again 19 and 10 .
- As the sorting is completed we have a sorted array.
### OUTPUT 2:
- We take an array of ten elements { 1,3,2,4,68,14,18,27,90,7}
- Now we compare the first two elements 1 and 3 . As they are already sorted. 1 is in the sorted sublist.
- Next we compare 3 and 2. As they are unsorted we swap the numbers and check with sorted sublist. as 2 is greater than 1. 2 is in the sorted sublist.
- By the end of fourth iteration we have four elements in the sorted sublist.
- Similarly the process is repeated until the array is sorted.
### OUTPUT  3:
- We take a sorted array {1,3,5,7,9}
- We compare the first two elements and. As they are sorted 1 is in the sorted sublist. Similarly we compare the next elements.
- As the elements are in sorted order,They do not require any swapping.
- After all the iterations we have the same sorted array.
