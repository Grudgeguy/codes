#include<stdio.h>
int main(){
    int n;
    printf("Enter No. of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr,a[n],*q;
    q=a;
    for(int i=0;i<n;i++){
        *(q+i)=*(p+i);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}