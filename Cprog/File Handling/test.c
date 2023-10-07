#include<string.h>
#include<stdio.h>
// #include "PASS_HASH.H"
void HASH_2(char * s,size_t n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            s[i]+=i+n;
        }
        else{
            printf("hey\n");
            s[i]+=(n+15)%(i+1);
        }
    }
}
int main(){
    char s[50];
    scanf("%s",s);
    HASH_2(s,strlen(s));
    printf("%s\n",s);
}