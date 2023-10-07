#include<stdio.h>
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
        printf("Enter a number \n");
        int a;
        scanf("%d",&a);
        for(int i=0;i<a;i++){
            printf("%d\t",fib(i));
        }
        printf("\n");
}