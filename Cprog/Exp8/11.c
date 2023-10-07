#include<string.h>
#include<stdio.h>
int main(){
    char s[50],s1[50];
    scanf("%s",s);
    char *p1=s,*p2=s1;
    for(int i=0;i<=strlen(s);i++){
        if(i==strlen(s)){
            *(p2+i)='\0';
            break;
        }
        *(p2+i)=*(p1+i);

    }
    for(int i=0;i<strlen(s1);i++){
        printf("%c",s1[i]);
    }
}