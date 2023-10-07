#include<stdio.h>
int ds(int n){
    if(n==0){
        return 0;
    }
    return n%10 + ds(n/10);
}
int main(){
    int n;
    printf("Enter an Integer : ");
    scanf("%d",&n);
    printf("%d",ds(n));
}