#include<stdio.h>
int main(){
    int n,el,f=0;
    printf("Enter No. of Elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array Elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element indice you wish to delete\n");
    scanf("%d",&el);
    int a[n-1];
    for(int i=0;i<n;i++){
        if(i==el){
            f=1;
            continue;
        }
        else{
            a[i-f]=arr[i];
        }
    }
    printf("After deletion \n");
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
}