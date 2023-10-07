#include<stdio.h>
int main(){
    int t;
    printf("Ente an integer : ");
    scanf("%d",&t);
    while(t!=0){
        printf("%d",t%10);
        t/=10;
    }
}