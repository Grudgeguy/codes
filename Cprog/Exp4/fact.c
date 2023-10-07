#include<stdio.h>
int main(){
    printf("Enter an Integer : ");
    int n,s=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s*=i;
    }
    printf("Factorial is %d",s);
}