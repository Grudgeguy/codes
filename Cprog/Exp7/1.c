#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Dimensions of the matrix : ");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x,y;
    printf("Enter the element row and column you wish to see :\n");
    scanf("%d%d",&x,&y);
    if(x>a||y>b||x<1||y<1){
        printf("Enter out of Bounds \n");
    }
    else{
        printf("Element : %d",arr[x-1][y-1]);
    }
}