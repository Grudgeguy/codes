#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>0;j--){
            if(j<=i){
                printf("%d ",i);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}