#include<iostream>
using namespace std;
class Fraction{
    private:
        int numerator;
        int denominator;
    public:
    Fraction(int numerator, int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    int min(){
        if(numerator<denominator){
            return numerator;
        }
        else{
            return denominator;
        }
    }
    
    int max(){
        if (numerator>denominator){
            return numerator;
        }
        else{
            return numerator;
        }
    }
    void simp(){
        int k=gcd();
        numerator/=k;
        denominator/=k;
    }
    int gcd(){
        int b=min();
        int a=max();
        int r=1;
        while(b!=0){
            r=a-b*(a/b);
            a=b;
            b=r;
        }
        return a;
    }
    void add(Fraction f2){
        int lcm = f2.denominator*denominator;
        int x= lcm/denominator;
        int y=lcm/f2.denominator;
        int num= x*numerator +y*f2.numerator;
        this->numerator=num;
        this->denominator=lcm;
        simp();
    }
    void display(){
        cout<<numerator<<"/"<<denominator;
    }
};