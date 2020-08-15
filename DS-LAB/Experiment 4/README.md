### Aim of the experiment:
Write a program using non-recursive functions to perform the following searching operations for a Key value in a given list of integers:
-Binary Search
### Description:
Binary Search :

It starts by testing the data in the element at the middle of the list. This determines if the target is in first half or second half of the list. If it is in first half , we do not need to check the second half. If it is in second half , we do not need to check the first half. In other words ,either way we eliminate half the list from further consideration
In this search ,elements in the list need to be ordered.
This type of search takes less time to execute

### Step by step Procedure:
- We have the array { 11,7,9,16,21,4,15,98,67,31}
- In Binary Search we need to sort the array 
- After sorting we have the array { 4,7,9,11,15,16,21,31,67,98}
- We need to find the mid value of the array which is the value at sum of initial and last index divided by 2
- After finding the mid value we need to check if the mid value and the key value are same.
- Case 1:- If Key = Mid
           we return mid value
- Case 2:- If Key < mid
           Our new last value = mid -1
- Case 3:- If Key > mid
           Our new initial value = mid + 1
- We repeat our process until we find our key element or until our search space is exhausted
OUTPUT 1 Key value : 16
- The mid value here is 15
- The Key value 16 is greater than mid value 15 so the new initial value is 16(index 4 + 1 = 5)
- So we start our search from 16 
- Key Value = Mid Value
- Hence we return element found with the index OUTPUT 2: the key element is 7
OUTPUT 2 Key value : 7
- The mid value is 15 
- As the key value is less than mid value(7<15) our new last value is 11
- So we start our search from 4 to 11
- Now the mid value is 7
- Key value = Mid value 
- Hence it returns element found with index.


### Output Obtained:
- Output 1 Key value 16: 

![output](NonRecBS1.png)

- Output 2 Key Value 7:

![output](NonRecBS2.png)

- Output 3 Key Value 67 :

![output](NonRecBS3.png)
