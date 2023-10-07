#include<iostream>
using namespace std;
template <class t1,class t2>
float avg(t1 a, t2 b){
    return (a+b)/2;
}
int main(){
    cout<<avg('a','z');
}