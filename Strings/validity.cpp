#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int f=1;
    for(int i=0;i<s.length();i++){
        if((s[i]<65 || s[i]>90) ||
         (s[i]<97&&s[i]>122)){
            f=0;
            cout<<"Invalid ";
            break;
        }
    }
    if(f==0){
        cout<<"Valid";
    }
}