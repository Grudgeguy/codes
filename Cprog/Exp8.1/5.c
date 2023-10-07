#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}
int main(){
    int a,b;
    printf("Enter 2 Integers : \n");
    scanf("%d%d",&a,&b);
    int m=mul(a,b);
    int d=div(a,b);
    int aa=add(a,b);
    int s=sub(a,b);
    printf("%d\t%d\t%d\t%d\t",aa,s,m,d);
}