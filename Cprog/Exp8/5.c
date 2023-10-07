#include<stdio.h>
int main(){
    int n;
    printf("Enter No. of elements : ");
    scanf("%d",&n);
    int arr[n],a[n];
    printf("\nENter elements of first array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter elements of second array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    int *p1=arr,*p2=a;
    for(int i=0;i<n;i++){
        t=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=t;
    }
    printf("\narray1\tarray2");
    for(int i=0;i<n;i++ )
    {
        printf("\n%d\t%d\n",*(p1+i),*(p2+i));
    }
}