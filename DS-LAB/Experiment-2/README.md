### Aim of the experiment:
Write a program using recursive functions to perform the following searching operations for a Key value in a given list of integers:
- Linear Search
### Description:
Linear Search :
- It is also known as sequential search .we start searching for the target from the beginning of the list, and we continue until we find the target or until we are sure that it is not in the list.
- In this search, elements in the list need not be ordered.
### Step by step procedure:

- We have the array elements 
{11,7,9,16,21,4,15,98,67,31}
- For the output 1 the key element we need to search is 15
- In the iterative process we check if the element and the key value are same 
- In Iteration 1
     a[0] = 11
     key not equal to 11,so the case fails
- In Iteration 2
    a[1] = 7
    key not equal to 7 so case fails
- In Iteration 3 
    a[2] = 9
    key not equal to 9 so case fails
- Similarly iterations continue until the element and key value are same 
- In Iteration 7
    a[8] = 15
    key equals to 15 so case passed
- In the function the iteration takes place and the element with index is printed to the output.
- If all the iteration cases fail then it returns Element not found to the output.

### Output obtained:
- Output 1 Key Value : 99
 
![output](RecLS1.png)

- Output 2 Key Value : 15

![output](RecLS2.png)

