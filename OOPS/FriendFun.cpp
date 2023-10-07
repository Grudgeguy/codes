#include<iostream>
using namespace std;
class complex{
    int real,comp;
    //private members cannot be accesses by outer functions so to just give them access we call friend function
    //friend function can be defined anywhere either in public or private section
    
    public:
    friend complex sum(complex a,complex b);
    friend complex sub(complex a,complex b);
    void set(int a,int b);
    void disp(void);
};
void complex :: disp(void){
    cout<<real<<" + "<<comp<<"i"<<endl;
}
complex sum(complex a,complex b){
    complex c;
    c.comp=a.comp+b.comp;
    c.real=a.real+b.real;
    return c;
}
complex sub(complex a,complex b){
    complex c;
    c.comp=a.comp-b.comp;
    c.real=a.real-b.real;
    return c;
}
void complex:: set(int a , int b){
    real=a;
    comp=b;
}
int main(){
    int a,b;
    complex k1,k2,k3;
    printf("Enter two complex numbers : \n");
    cin>>a>>b;
    k1.set(a,b);
    printf("Enter two complex numbers : \n");
    cin>>a>>b;
    k2.set(a,b);
    k3=sum(k1,k2);
    k3.disp();
}