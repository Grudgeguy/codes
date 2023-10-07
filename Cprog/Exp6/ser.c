#include<stdio.h>
int main(){
    int n,el,f=0;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements  : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you wish to search for \n");
    scanf("%d",&el);
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            printf("Element found at index %d",i); 
            f=1;
            break;
        }
    }
    if(f==0){
        printf("Element not found :-\\");
    }
}