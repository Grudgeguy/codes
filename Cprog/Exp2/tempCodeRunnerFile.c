#define pi 3.141592
#include<stdio.h>
int main(){
    int r;
    printf("Enter radius :\n");
    scanf("%d",&r);
    printf("area is %f ",pi*r*r);
    printf("\ncircumference is %f",pi*r*2);
}