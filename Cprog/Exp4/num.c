#include<stdio.h>
int main(){
    int t;
    printf("Enter an Integer : ");
    scanf("%d",&t);
    if(t<0){
        printf("Negative");
    }
    else if(t==0){
        printf("Zero");
    }
    else{
        printf("Postive");
    }
}