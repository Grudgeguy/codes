#include<stdio.h>
int power(int n, int p){
    if(p==0){
        return 1;
    }
    else if (p==1){
        int t=power(n,p/2);
        return n;
    }
    else if(p%2==0){
        int t=power(n,p/2);
        return t*t;
    }
    else{
        int t=power(n,p/2);
        return t*t*n;
    }
}
int main(){
    int n,p;
    printf("Enter a number and its power : \n");
    scanf("%d%d",&n,&p);
    printf("%d",power(n,p));
}