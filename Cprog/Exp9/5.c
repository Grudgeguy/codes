#include <stdio.h>
typedef struct fti
{
    int ft;
    int ihs;
}fti;
int main()
{
    fti a, b, c;
    printf("Enter size in feet and Inches :\n");
    scanf("%d%d", &a.ft,&a.ihs);
    scanf("%d%d", &b.ft,&b.ihs);
    c.ft = a.ft + b.ft;
    c.ihs = a.ihs + b.ihs;
    if ((a.ihs + b.ihs) > 12.00)
    {
        c.ft = c.ft + c.ihs / 12;
        c.ihs = c.ihs % 12;
    }
    printf("Sum : %dft %dInches.", c.ft, c.ihs);
}
