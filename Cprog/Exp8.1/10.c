#include<stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    printf("Enter 2 Integers : \n");
    scanf("%d%d",&a,&b);
    printf("min is %d and max is %d",min(a,b),max(a,b));
}