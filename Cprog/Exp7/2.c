#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the dimensions of the matrix : ");
    scanf("%d%d",&a,&b);
    int m1[a][b],m2[a][b];
    printf("Enter the elements of first matrix \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter the elements of Second matrix \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    printf("The addition of array\n");
    int sum[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sum[i][j]=m1[i][j]+m2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}