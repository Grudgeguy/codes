#include<stdio.h>
int main(){
    int u,t,a;
    float s;
    scanf("%d%d%d",&u,&a,&t);
    s=u*t+(a*t*t)/2;
    printf("s is %f",s);
}