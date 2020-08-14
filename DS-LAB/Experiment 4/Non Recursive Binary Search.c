
#include<stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;


    if (arr[m] == x)
        return m;

    if (arr[m] < x)
        l = m + 1;


    else
         r = m - 1;
  }


  return -1;
}

int main()
{
   int arr[] = {4,7,9,11,15,16,21,31,67,98},x;
   int n = sizeof(arr)/ sizeof(arr[0]);
   printf("Enter the element to be searched:");
   scanf("%d",&x);
   int result = binarySearch(arr, 0, n-1, x);
   if(result == -1){
      printf("Element is not present in array")
   }
   else{
      printf("Element is present at index %d", result);
   }
   return 0;
}
