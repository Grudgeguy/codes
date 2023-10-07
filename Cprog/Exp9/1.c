#include<stdio.h>
typedef struct company{
    char name[50];
    int dob[3];
    long long phn;
    char add[100];
} c;
void disp(c s){
    printf("Name : %s\n",s.name);
    printf("Address : %s",s.add);
    printf("DOB %d/%d/%d\n",s.dob[0],s.dob[1],s.dob[2]);
    printf("Phone : %lld",s.phn);
}
int main(){
    c e1;
    printf("Name : ");
    fflush(stdin);
    gets(e1.name);
    printf("Enter DOB\nDate : ");
    scanf("%d",&e1.dob[0]);
    printf("Enter Month : ");
    scanf("%d",&e1.dob[1]);
    printf("Enter Year : ");
    scanf("%d",&e1.dob[2]);
    printf("Enter Phone Number : ");
    scanf("%lld",&e1.phn);
    fflush(stdin);
    printf("Enter Address : ");
    gets(e1.add);
    disp(e1);
}
