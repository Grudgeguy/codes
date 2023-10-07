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
    int *p=arr,t;
    for(int i=0;i<n/2;i++){
        t=*(p+i);
        *(p+i)=*(p+n-i-1);
        *(p+n-i-1)=t;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
}