#include<iostream>
using namespace std;
class ll{
    public:
        int data;
        ll* next;
};
int main(){
    // int n;
    // cin>>n;
    ll** arr = new ll*[4];
    for(int i=0;i<n;i++){
        arr[i] = new ll;
        arr[i]->next=NULL;
    }
    arr[0]->data=1;
    
}