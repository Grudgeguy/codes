#include<iostream>
#include "Fraction.cpp"
using namespace std;
int main(){  
    int n1,d1,n2,d2;
    cin>>n1>>d1>>n2>>d2;
    Fraction f1=Fraction(n1,d1),f2(n2,d2);
    f1.add(f2);
    f1.display();
}