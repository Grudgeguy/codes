#include<iostream>
using namespace std;
template <class t1,class t2>
class myc{
    public:
    t1 d1;
    t2 d2;
    myc(t1 a,t2 b){
        this->d1=a;
        this->d2=b;
    }
    void disp(){
        cout<<d1<<"->"<<d2<<endl;
    }
};
int main(){
    myc <int , char> obj(12,'a');
    obj.disp();
}