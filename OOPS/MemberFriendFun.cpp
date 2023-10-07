#include<iostream>
using namespace std;
class comp; //forward declaration
class calc{
    public:
    int sum(comp a ,comp b);
};
class comp{
    int real,comp;
    public:  
    friend int calc:: sum(comp a,comp b);
};

int calc::sum(comp a ,comp b){
    comp c;
    c.real=a.real+b.real;
    c.comp=a.comp+b.comp;
}