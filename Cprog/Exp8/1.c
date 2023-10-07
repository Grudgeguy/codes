#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr,m=arr[0];
    for(int i=0;i<n;i++){
        if(*(p+i)>m){
            m=*(p+i);
        }
    }
    printf("Max is %d ",m);
}