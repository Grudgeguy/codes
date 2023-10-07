#include<iostream>
using namespace std;
int main(){
    string s;
    int i=0;
    cin>>s;
    while(s[i]!='\0'){
        i++;
    }
    cout<<"Length : "<<i;
}