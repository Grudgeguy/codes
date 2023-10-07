#include<stdio.h>
int main(){
    int t;
    printf("Enter a year ");
    scanf("%d",&t);
    if(t%400==0){
        printf("%d is a leap year",t);
    }
    else if(t%100==0){
        printf("%d is not a leap year",t);
    }
    else if(t%4==0){
        printf("%d year is a leap year",t);
    }
    else{
        printf("%d year is not a leap year",t);
    }
}