#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 Numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("%d is largest\n",a);
    }
    else if (b>=a && b>=c){
        printf("%d is largest\n",b);
    }
    else {
        printf("%d is largest\n",c);
    }
}