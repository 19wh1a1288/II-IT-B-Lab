
#include <stdio.h>


int binarySearch(int a[], int initial, int last, int x)
{
    if (last >= initial) {
        int mid = initial + (last - initial) / 2;


        if (a[mid] == x)
            return mid;


        if (a[mid] > x)
            return binarySearch(a, initial, mid - 1, x);


        return binarySearch(a, mid + 1, last, x);
    }


    return -1;
}

int main()
{
    int a[] = { 4,7,9,11,15,16,21,31,67,98 },x;
    int n = sizeof(a) / sizeof(a[0]);
    printf("Enter the element to be searched:");
    scanf("%d",&x);
    int result = binarySearch(a, 0, n - 1, x);
    if(result == -1){
            printf("Element is not present in array");
    }
    else{
            printf("Element is present at index %d",result);
    }
    return 0;
}
