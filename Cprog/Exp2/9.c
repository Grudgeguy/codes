#include<math.h>
#include<stdio.h>
int main(){
    int b,p;
    scanf("%d%d",&b,&p);
    float h=sqrt(b*b+p*p);
    printf("h is %f",h);
}