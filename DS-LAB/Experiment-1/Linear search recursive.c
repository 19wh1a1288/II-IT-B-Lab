#include<stdio.h>
 int RecLinearSearch(int a[],int value,int index,int n){
        int s = 0;
        if(index  >= n){
            return 0;
        }
        else if (a[index] == value){
            s = index + 1;
        }
        else{
            return RecLinearSearch(a,value,index +1 ,n);
        }
        return s;
}
int main(){
    int n , i, value , s ;
    int a[100];
    printf("Enter the total number of elements in the array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }


    printf("Enter the element to search:");
    scanf("%d",&value);

    s = RecLinearSearch(a,value,0,n);
    if(s != 0 ){
        printf("Element found at index %d",s-1);
    }
    else{
        printf("Element not found");
    }
    return 0;
 }
