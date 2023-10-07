#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],*p1,*p2;
    printf("Enter two Strings\n");
    scanf("%s%s",s1,s2);
    p1=s1;
    p2=s2;
    int c=0;
    if(strlen(s1)==strlen(s2)){
        for(int i=0;i<strlen(s1);i++){
            if(*(p1+i)!=*(p2+i)){
                printf("Strings are not same \n");
                c=1;
                break;
            }
        }
        if(c==0){
            printf("Strings are same\n");
        }
    }
    else{
        printf("Strings are of not the same length\n");
    }
}