
#include<iostream>
using namespace std;
class  Emp{
    private:
        string name;
        string comp;
        int age;
    public:
        void intro(){
            cout<<"Name : "<<name<<"\nCompany : "<<comp<<"\nAge : "<<age<<endl;
        }
        void sName(string name){
            this->name=name;
        }
        string gName(){
            return name;
        }
        void sAge(int age){
            if (age>=18)
                this->age=age;
        }
        int gAge(){
            return age;
        }
        void sComp(string comp){
            this->comp=comp;
        }
        string gComp(){
            return comp;
        }
        Emp(string name,string comp/*,int age*/){
            this->name=name;
            this->comp=comp;
            // this->age=age;
        }
};
int main(){
    Emp e1("Dhruv","IIITU");
    e1.sAge(2);
    e1.intro();
}