#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter dimensions of matrix 1 and matrix 2\n");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(c1!=r2){
        printf("Matrix multiplication not possible :(");
    }
    else{
    int a1[r1][c1],a2[r2][c2],s[r1][c2];
    printf("ENter elements for 1st matrix\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("ENter elements for 2nd matrin\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&a2[i][j]);
        }
    }
    int k=0;
    int *p1=a1[0],*p2=a2[0],*p3=s[0];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int m=0;m<r1;m++){
                k+=*(p1+r1*i+m)*(*(p2+m*c2+j));
            }
            *(p3+r1*i+j)=k;
            k=0;
        }
    }
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }   
    }
}