#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character :");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("Digit");        
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Uppercase\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\nLower Case\n");
    }
    else
    {
        printf("Special Character\n");
    }
    return 0;
}