#include<stdio.h>
int s(int a){
    if(a==1){
        return 1;
    }
    return s(a-1)+a;
}
int main(){
    while(1){
        printf("Enter two number \n");
        int a,b;
        scanf("%d",&a);
        printf("%d\n",s(a));
    }
}