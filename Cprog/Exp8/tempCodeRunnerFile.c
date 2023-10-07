#include<string.h>
#include<stdio.h>
int main(){
    char s1[100],s2[100],*p,s[200];
    printf("Enter two strings \n");
    scanf("%s",s1);
    scanf("%s",s2);
    int k=strlen(s1);
    for(int i=0;i<=strlen(s1)+strlen(s2);i++){
        if(i==strlen(s1)+strlen(s2)){
            *(s+i)='\0';
            break;
        }
        if(i<strlen(s1)){
            *(s+i)=*(s1+i);
        }
        else{
            *(s+i)=*(s2+i-k);
        }
    }
    printf("String is  %s",s);
}