#include<iostream>
using namespace std;
int main(){
    int *p,*q;
    p= new int[5];
    for(int i=0;i<5;i++){
        cin>>*(p+i);
    }
    q=new int[10];
    cout<<sizeof(q);
    for(int i=0;i<5;i++){
        *(q+i)=*(p+i);
    }
    delete p;

}