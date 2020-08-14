#include<stdio.h>

int Iterative_binarySearch(int a[], int l, int r, int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;


    if (a[m] == x)
        return m;

    if (a[m] < x)
        l = m + 1;


    else
         r = m - 1;
  }


  return -1;
}

int main()
{
   int a[] = {4,7,9,11,15,16,21,31,67,98},x;
   int n = sizeof(a)/ sizeof(a[0]);
   printf("Enter the element to be searched:");
   scanf("%d",&x);
   int result = Iterative_binarySearch(a, 0, n-1, x);
   if(result == -1){
      printf("Element is not present in array");
   }
   else{
      printf("Element is present at index %d", result);
   }
   return 0;
}
