#include<stdio.h>
int main(){
    int a,b,s=1;
    scanf("%d%d",&a,&b);
    if(a<b){
        for(int i=2;i<=a;i++){
            if((a%i==0)&& (b%i==0)){
                s=i;
            }
        }
    }
    else{
        for(int i=2;i<=b;i++){
            if((a%i==0)&& (b%i==0)){
                s=i;
            }
        }
    }
    int lcm=(a*b)/s;
    printf("LCM : %d\n",lcm);
    printf("GCD : %d\n",s);
}
