#include<stdio.h>
int main(){
    int n;
    printf("Enter No. of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    for(int i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
} 