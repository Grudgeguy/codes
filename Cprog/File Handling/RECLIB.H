//Defining out Class 
#include "PASS_HASH.H"
// #include<string.h>
#define pf printf
typedef struct {
    char name[50];
    int dob;
    int roll;
    char cnm[40];
    int mks[3];
    float avg;
    int age;
    char pass[50];
    float ptile;
} cl;

//Function for adding a record
void REC_ADD(){
    // system("cls");
    cl  s1;
    float sum;
    char s[100];
    FILE *ptr=fopen("D:\\Projs\\Course\\Cprog\\File Handling\\new.txt","a+");
    pf("Enter the data in following format \n1.Name : ");
    fflush(stdin);
    gets(s1.name);
    pf("2.Roll No. : ");
    scanf("%d",&s1.roll);
    pf("Choose a password : ");
    scanf("%s",s1.pass);
    HASH_2(s1.pass,strlen(s1.pass));
    pf("3.Class Name : ");
    fflush(stdin);
    gets(s1.cnm);
    pf("4.Date of Birth(DDMMYYYY) : ");
    scanf("%d",&s1.dob);
    // fpf(ptr,"%d\t%s\t%s\t%d\t",s1.roll,s1.name,s1.cnm,s1.dob);
    pf("5.Marks of 5 subjects : \n");
    for(int i=0;i<3;i++){
        pf("Subject[%d] : ",i+1);
        scanf("%d",&s1.mks[i]);
        sum+=s1.mks[i];
        // fpf(ptr,"%d\t",s1.mks[i]);
    }
    s1.avg=sum/3;
    // fpf(ptr,"%f\n",s1.avg);
    fwrite(&s1,sizeof(s1),1,ptr);
    fclose(ptr);
}

//Function for Reading a Record
void READ_REC(){
    int c=1;
    pf("Record : %d\n",c++);
    FILE *f1=fopen("new.txt","r+");
    cl s;
    if(f1==NULL){
        pf("Unable to open file\n");
    }
    system("cls");
    // fscanf(f1,"%d %[^\t] %[^\t] %d %d %d %d %f",&s.roll,s.name,s.cnm,&s.dob,&s.mks[0],&s.mks[1],&s.mks[2],&s.avg);
    while(fread(&s,sizeof(s),1,f1)){
        pf("Roll No. : %d\n",s.roll);
        pf("Name : %s\n",s.name);
        pf("Class Name : %s\n",s.cnm);
        pf("Date Of Birth : %d/%d/%d\n",s.dob/1000000,(s.dob%1000000)/10000,s.dob%10000);
        // pf("------------------------------------------------------------------------------------------------------------\n");
        for(int i=0;i<3;i++){
            pf("Marks in Subject[%d] : %d\n",i+1,s.mks[i]);
        }
        pf("Average : %.2f\n",s.avg);
        pf("Password : %s\n",s.pass);
        pf("------------------------------------------------------------------------------------------------------------\n");
    }
    fclose(f1);
} 
void REC_SER(){
    FILE *ptr=fopen("D:\\Projs\\Course\\Cprog\\File Handling\\new.txt","a+");
    cl s;
    int k,f=0;
    char pass[50];
    pf("Enter the Roll No. : ");
    scanf("%d",&k);
    while(fread(&s,sizeof(cl),1,ptr)){
        if(s.roll==k){
            pf("Record Present\n");
            f=1;
            pf("Enter the password to view  : ");
            scanf("%s",pass);
            HASH_2(pass,strlen(pass));
            // printf("psss : %s",pass);
            for(int i=0;i<strlen(pass);i++){
                if(pass[i]!=s.pass[i]){
                    pf("Wrong Password\nExiting...");
                    f=2;
                    abort();
                }
            }
            if(f==1){
                pf("Roll No. : %d\n",s.roll);
                pf("Name : %s\n",s.name);
                pf("Class Name : %s\n",s.cnm);
                pf("Date Of Birth : %d/%d/%d\n",s.dob/1000000,(s.dob%1000000)/10000,s.dob%10000);
                pf("------------------------------------------------------------------------------------------------------------\n");
                for(int i=0;i<3;i++){
                pf("Marks in Subject[%d] : %d\n",i+1,s.mks[i]);
            }
            pf("Average : %.2f\n",s.avg);
            fclose(ptr);
                f=1;
                break;
            }
        }
    }   
    if(f==0){
        pf("Record Absent\n");
    }
}
void UPDT(){
    FILE *ptr=fopen("new.txt","a+");
    cl s;
    char pass[50];
    int f=0;
    unsigned int r;
    pf("Enter the Roll no. You wish to append : ");
    scanf("%d",&r);
    while(fread(&s,sizeof(cl),1,ptr)){
        if(s.roll==r){
            f=1;
            pf("Record Present : ");
            pf("Enter Password to modify : ");
            scanf("%s",pass);
            HASH_2(pass,strlen(pass));
            // for(int i=0;)
        }
    }
    if(f==0){
        pf("Inavalid Roll\nTry adding a new record\n");
    }
}