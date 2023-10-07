#include<stdio.h>
int fac(int x){
    if(x==1||x==0){
        return 1;
    }
    return fac(x-1)*x;
}
int main(){
    while(1){
        printf("Enter a number \n");
        int n;
        scanf("%d",&n);
        printf("%d\n",fac(n));
    }
}