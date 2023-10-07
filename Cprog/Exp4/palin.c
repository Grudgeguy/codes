#include<stdio.h>
int main(){
    int s=0,k;
    printf("Enter a number : ");
    scanf("%d",&k);
    int t=k;
    while(k!=0){
        s=s*10+(k%10);
        k/=10;
    }
    if(s==t){
        printf("Number is a Palindrome\n");
    }
    else{
        printf("Number is not a Palindrome\n");
    }
}