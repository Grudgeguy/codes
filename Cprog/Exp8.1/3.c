#include<stdio.h>
int m(int a,int b){
    return a*b;
}
int main(){
    while(1){
        printf("Enter two number \n");
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",m(a,b));
    }
}