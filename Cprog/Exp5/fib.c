#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer :");
    scanf("%d",&n);
    int c,a=0,b=1;
    printf("0 1 ");
    for(int i=0;i<n-2;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}