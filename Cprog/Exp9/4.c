#include <stdio.h>
typedef struct company
{
    char name[50];
    char add[50];
    char phn[11];
    char dob[10];
}cp;
int main()
{
    int n;
    printf("Enter the number of Employees : ");
    scanf("%d", &n);
    cp e[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data for Employee\n");
        printf("Name :");
        scanf("%s", e[i].name);
        printf("Address : ");
        scanf("%s", e[i].add);
        printf("DOB : ");
        scanf("%s", e[i].dob);
        printf("Phone : ");
        scanf("%s", e[i].phn);
    }
    printf("Entered Data of the Employess - \n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee - %d \n Name is %s. \n Address is %s. \n Phone number is %s. \n DOB is %s.\n", i + 1, e[i].name, e[i].add, e[i].phn, e[i].dob);
    }
}
