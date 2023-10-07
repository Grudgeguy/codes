#include<stdio.h>
typedef struct complex{
    int real,comp;
}clx;
clx sum(clx a,clx b){
    clx c;
    c.comp=a.comp+b.comp;
    c.real=a.real+b.real;
    return c;
}
clx sub(clx a,clx b){
    clx c;
    c.comp=a.comp-b.comp;
    c.real=a.real-b.real;
    return c;
}
int main(){
    clx a,b;
    printf("Enter two complex numbers : \n");
    scanf("%d%d%d%d",&a.real,&a.comp,&b.real,&b.comp);
    printf("Sum :%d + %di\n",sum(a,b).real,sum(a,b).comp);
    printf("Diff : %d + %di\n",sub(a,b).real,sub(a,b).comp);
}