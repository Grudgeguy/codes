#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    int i=1;
    while(i!=6){
        int j=1;
        while(j!=i+1){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}