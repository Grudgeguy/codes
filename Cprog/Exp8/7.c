#include<stdio.h>
int main(){
    int n;
    printf("Enter No. of elements : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sr,f=0;
    printf("ENter element to be searched\n");
    scanf("%d",&sr);
    int *p=arr;
    for(int i=0;i<n;i++){
        if(sr==*(p+i)){
            printf("ELement found at %d index",i);
            f=1;
        }
    }
    if(f==0){
        printf("Element not found :(\n");
    }
}