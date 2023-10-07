#include<iostream>
using namespace std;
template <class t>
class myvec{
    public:
    int size;
    t *arr;
    myvec(int s){
        this->size=s;
        arr = new t[size];
    }
};
int main(){
    int n;
    cin>>n;
    myvec <float> veco(n);
    for(int i=0;i<veco.size;i++){
        cin>>veco.arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<veco.arr[i]<<"\n";
    }
}