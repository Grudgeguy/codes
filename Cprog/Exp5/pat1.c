#include <stdio.h>
int main() //Pattern - 8
{
    int a = 65;
    char c;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
           printf("  ");
        }
        for (int k = 6; k >= i; a++, k--)
        {
            c = a;
            printf("%c  ", c);
        }
        printf("\n");
        a = 65;
    }
}
