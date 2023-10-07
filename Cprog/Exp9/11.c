#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f1, *f2, *f3;
    char ch[1000];
    f1 = fopen("file1.txt", "r");
    if (f1 == NULL)
        printf("file doesnt exist.");
    else
    {
        printf("Content of file1.txt is  \n");

        f3 = fopen("file3.txt", "w+");
        while (fgets(ch, 1000, f1) != NULL)
        {
            printf("%s", ch);
            if (strlen(ch) > 0)
            {
                fputs(ch, f3);
            }
        }
    }
    fclose(f1);
    fclose(f3);
    f2 = fopen("file2.txt", "r");
    if (f2 == NULL)
        printf("file doesnt exist.");
    else
    {
        printf("\nContent of File 2\n");

        f3 = fopen("file3.txt", "a+");
        while (fgets(ch, 1000, f2) != NULL)
        {
            printf("%s", ch);
            if (strlen(ch) > 0)
            {
                fputs(ch, f3);
            }
        }
    }
    fclose(f2);
    fclose(f3);
    char cd[1000];
    f3 = fopen("file3.txt", "r");
    printf("\nContent of File f3.txt is  - \n");
    if (f3 == NULL)
        printf("file doesnt exist.");
    else
    {
        while (fgets(cd, 1000, f3) != NULL)
            printf("%s", cd);
    }
    fclose(f3);
}
