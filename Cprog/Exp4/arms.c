#include<stdio.h>
int main(){
    int t,s=0,k,n;
    printf("Enter a number : ");
    scanf("%d",&t);
    n=t;
    while(t!=0){
        k=t%10;
        s+=k*k*k;
        t/=10;
    }
    if(s==n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}   