#include<stdio.h>
int main(){
    int t,s=0;
    printf("Enter a number : ");
    scanf("%d",&t);
    while(t!=0){
        s+=t%10;
        t/=10;
    }
    printf("Sum is %d ", s);
}