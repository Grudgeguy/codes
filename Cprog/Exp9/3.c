#include<stdio.h>
#include<conio.h>
typedef struct {
    char name[50];
    int dob;
    int roll;
    char cnm[5];
    int mks[5];
    float avg;
    int age;
} cl;
int main(){
    cl s1;
    printf("Enter the data in following format \n1.Name : ");
    gets(s1.name);
    printf("2.Roll No. : ");
    scanf("%d",&s1.roll);
    printf("3.Class Name : ");
    fflush(stdin);
    gets(s1.cnm);
    printf("4.Date of Birth(DDMMYYYY) : ");
    scanf("%d",&s1.dob);
    printf("5.Marks of 5 subjects : \n");
    for(int i=0;i<5;i++){
        printf("Subject[%d] : ",i+1);
        scanf("%d",&s1.mks[i]);
    }
    float s;
    printf("Student record\n");
    printf("Name : %s\nRoll No. : %d\nClass Name : %s\n",s1.name,s1.roll,&s1.cnm);
    printf("Date of Birth : %d/%d/%d\n",s1.dob/1000000,(s1.dob%1000000)/10000,s1.dob%10000);
    for(int i=0;i<5;i++){
        printf("Marks in Subject %d : %d\n",i,s1.mks[i]);
        s+=s1.mks[i];
    }
    s1.avg=s/5;
    printf("Average is %f",s1.avg);
    getchar();
}