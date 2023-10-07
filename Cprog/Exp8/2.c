#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr,s=0;
    for(int i=0;i<n;i++){
        s+=*(p+i);
    }
    printf("Sum is %d",s);
}