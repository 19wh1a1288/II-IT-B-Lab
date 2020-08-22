### Aim of the Experiment:
Write a program that implements bubble sorting method to sort a given list of integers in ascending order

### Description:
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
- It is also known as sinking sort
- It compares the first two elements, and if the first is greater than the second, it
swaps them.
- It continues doing this for each pair of adjacent elements to the end of the data set.
- It then starts again with the first two elements.
- Repeating until no swaps have occurred on the last pass
- If we have n number of elements then we will have n-1 number of passes

### Step by step procedure:
- Initially we declare an array with a specific number of elements.
- Then we have to compare the adjacent two elements starting from the initial positions.
- If the first element is greater than the second element we have to swap them. If not we have to consider the next two adjacent elements.
- This process continues until the whole array gets sorted.
- Once the array gets sorted we need to print them.
- OUTPUT1:
- We take an unsorted array of 5 elements {25,2,30,19,5}
- We start with the first two elements, comparing them to check which one is greater.Here we compare 25and 2.
- Value 2 is less than 25 so we swap both the numbers.So we have {2,25,30,19,5}
- Now we compare 25 and 30.As 30 is greater than 25 so it is already in sorted locations.
- Next we compare 30 and 19 , As 19 is less than 30 we swap both the numbers.So we have {2,25,19,30,5}
- Now we compare 30 and 5 and the values are swapped so now 30 is at the correct position.
- By the end of the first pass last element which is 30 is at its correct position.
- Now the second pass starts and compares the elements and swaps if it is neccesary.
- Similary it continues this process and by the end of the second pass the last second highest number will be in its correct location.
- So array is {2,5,19,25,30} which is sorted .
- OUTPUT2:
- We take an unsorted array of 10 elements {19,18,22,29,30,6,4,9,11,5}
- We start with the first two elements and compare them . Here we compare 19 and 18.
- As 18 is less than 19 we swap both the numbers .So we have {18,19,22,29,30,6,4,9,11,5}
- Similarly we compare and swap the numbers until we reach the end of the array. The array we have is {18,19,22,29,6,4,9,11,30,5}
- In the last comparison we compare the numbers 30 and 5 and after swapping, the number 30 is at its correct location.
- By the end of the first pass last element which is 30 is at its correct location.
- Now the second pass starts and compares the elements and swaps if it is neccesary.
- So now by the end of the second pass last second highest element 29 will be in its position.
- Then the next pass starts and continues until the array is sorted.
- At last in the eighth pass we have the sorted array
- The sorted array is {4,5,6,9,11,18,19,22,29,30}
- OUTPUT3:
- We take a sorted array of 5 elements.
- we start comparing the first two elements .
- As the numbers are already in correct sorted locations
- The array is printed.

### OUTPUT OBTAINED:

