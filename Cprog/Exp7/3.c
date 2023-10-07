#include<stdio.h>
int main(){
    printf("Enter the elements for first matrix of 3x3 \n");
    int a1[3][3],a2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the elements for Second matrix of 3x3 \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a2[i][j]);
        }
    }
    int k=0;
    int mat[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int m=0;m<3;m++){
                k+=a1[i][m]*a2[m][j];
        }
            mat[i][j]=k;
            k=0;
        }
    }
    printf("The Matrix Product is : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}