#include<stdio.h>
#include<string.h>
int main(){
    char c[30];
    int v=0,cc=0;
    printf("Enter a string : ");
    scanf("%s",c);
    for(int i=0;i<strlen(c);i++){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'){
            v++;
        }
        else{
            cc++;
        }
    }
    printf("Vowels are %d and consonants are %d\n",v,cc);
}