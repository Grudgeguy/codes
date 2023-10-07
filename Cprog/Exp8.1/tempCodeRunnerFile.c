#include<stdio.h>
int rev(int n){
    if(n!=0){
        printf("%d",n%10);
        rev(n/10);
    }
}
int main(){
    int n;
    printf("Enter an Integer : ");
    scanf("%d",&n);
    rev(n);
}