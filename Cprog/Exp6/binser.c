#include<stdio.h>
int main(){
    int n,key;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n],li=0,ui=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m=(li+ui)/2;
    int c=0,f=0;
    printf("Enter element to be searched : ");
    scanf("%d",&key);
    while(1){
        if(arr[m]==key){
            printf("Found at index : %d",(li+ui)/2);
            break;
        }
        else if (arr[m]<key){
            li=m+1;
            m=(li+ui)/2;
        }
        else if (arr[(li+ui)/2]>key){
            ui=m-1;
            m=(li+ui)/2;
        }
        if(li==ui && f==1){
            printf("Element not found :=( ");
            break;
        }
        c++;
    }
    printf("\nFound in %d iterations",c);
}