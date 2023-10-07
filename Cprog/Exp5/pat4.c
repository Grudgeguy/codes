#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=9;j++){    
            if(j<=(i-1)||j>=10-(i-1)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}