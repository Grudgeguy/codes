#include<iostream>
using namespace std;
class chain{
    int val;
    chain *next;
};
int main(){
    int a[]={10,12,14,3,14,29};
    chain arr[10];
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        chain arr[a[i]%10]=new chain;
        
    }
}