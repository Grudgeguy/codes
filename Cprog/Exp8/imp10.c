#include<stdio.h>
int main(){
    char s[]="Hello_bro";
    char *p=s;
    int i=0;
    while(*(p++)!='\0'){
        i++;
    }
    printf("The size of the string is %d",i);
}