#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}