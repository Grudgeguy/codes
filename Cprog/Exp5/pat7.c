#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        for(int j=10;j>0;j--){
            if(i==1||i==10){
                printf("*");
            }
            else if(i==j){
                printf("*");            
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}