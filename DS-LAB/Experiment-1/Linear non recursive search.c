#include <stdio.h>

int Linearsearch(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int main(){

    int a[100],i,n,x;

    printf("Enter the total number the elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&x);

    int result = Linearsearch(a, n, x);
    if(result == -1){
        printf("Element is not present in array");
    }
     else{

      printf("Element is present at index %d",
                            result);
     }
    return 0;
}
