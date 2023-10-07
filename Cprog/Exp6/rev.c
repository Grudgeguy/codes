#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-1-i]=temp;
    }
    printf("Reversed array :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}