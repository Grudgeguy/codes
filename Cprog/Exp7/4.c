#include<string.h>
#include<stdio.h>
int main(){
    char c[20];
    int f=0;
    scanf("%s",c);
    int k=strlen(c);
    for(int i=0;i<k/2;i++){
        if(c[i]!=c[k-i-1]){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("Not a palindrome \n");
    }
    else{
        printf("It is a palindrome\n");
    }
}