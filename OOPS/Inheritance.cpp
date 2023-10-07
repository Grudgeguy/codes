
#include<iostream>
using namespace std;
class  Emp{
    protected:
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
class Developer:Emp{
    public:
        string favprog;
        Developer(string name,string comp,int age, string favprog)
        :Emp(name,comp){
            sAge(age);
            this->favprog=favprog;
        }
        void dis(){
            cout<<"Name : "<<name<<"\nCompany : "<<comp<<"\nAge : "<<age<<"\nFavLang : "<<favprog;
        }
};
int main(){
    std::cout<<std::endl;
    Emp e1("Dhruv","IIITU");
    e1.sAge(34);
    e1.intro();
    std::cout<<std::endl;
    //once we create a constructor manually and we try inherit that class into another class then in that second class
    //too the default constructor is gone and we have to create the constructor manually for the developer class ;
    Developer d1("Grudge","Self-accompanied",21,"c++");
    d1.dis();

}