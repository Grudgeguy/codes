#include<iostream>
using namespace std;
class Student{
    // private:
    // int age;
    public:
    int age;
    int rollno;
    void disp2(void);
    void display(){
        std::cout<<age <<" "<<rollno;
    }
    int getage(){
        return age;
    }
    //automatically a constructor is created in the memory which gives garbage value to the the private and public variables (s1.Student())
    // we also create the constructor to give an initial value to all the variables 
    Student(){
        cout<<"Constructor Created 1\n";
    }
    Student(int a, int r){
        cout<<"Constuctor 2 created\n";
        age=a;
        rollno=r;
    }
    Student(int age){
        this->age=age;
        cout<<"Constructor 3 called\n";
    }
    void setage(int a,int pass){
        if(age<0){
            return;
        }
        if(pass!=123){
            return;
        }
        age=a;
    }
    ~Student(){
        cout<<"Destructor called and is used to free memory space before the end of program\n";
    }
};
void Student :: disp2(void){
    std::cout<<age<<" "<<rollno<<endl;
}  