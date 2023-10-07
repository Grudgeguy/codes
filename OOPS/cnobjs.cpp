#include<iostream>
#include "student.cpp"
using namespace std;
int main(){
    // //creating static objects
    // Student s1;
    // // Dynamic object creation
    // Student *s2=new Student;
    // s2->setage(35,123);
    // s2->rollno=21215;
    // s2->display();
    Student s3(23);
    Student s4(222,45);
    s4.disp2();
    cout<<"s5";
    Student s5(s4);//creating a copy constructor
    Student s6=s4,*s7; //for s6 a copy assignment operator is used but no that just appears ... internally it is interpreted as s6(s4)
    s7 = new Student;
    *s7=s4;
    delete s7;//As the s7 object is created in heap d(dynamically at run time ) we have to delete this memory manually so calling delte function calls the dwestructor for this

}