#include<stdio.h>
int main(){
    int m,n;
    printf("Enter dimensions of matrix : ");
    scanf("%d%d",&m,&n);
    printf("Enter elements : ");
    int a1[m][n],a2[m][n],s[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter elements : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a2[i][j]);
        }
    }
    int k=0;
    int *p1=a1[0],*p2=a2[0],*p3=s[0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            *(p3+i*m+j)=*(p1+i*m+j)+*(p2+i*m+j);
        }
        k++;
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
}