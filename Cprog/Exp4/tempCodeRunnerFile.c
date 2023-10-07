#include<stdio.h>
int main(){
    int t,s=0,c=0;
    printf("Enter a number : ");
    scanf("%d",&t);
    while(t!=0){
        t/=10;
        c++;
    }
    printf("No. of digits : %d ", c);
}
