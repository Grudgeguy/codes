#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    while(1){
        int a,b;
        printf("Enter 2 integers\n");
        scanf("%d%d",&a,&b);
        printf("%d\n",sum(a,b));
    }
}