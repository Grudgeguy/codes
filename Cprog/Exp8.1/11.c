#include<stdio.h>
int ty(int n){
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main(){
    int n;
    printf("Enter an Integer : ");
    scanf("%d",&n);
    ty(n);
}