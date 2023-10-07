#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long int h=0,x=0;
    for(int i=0;i<s.length();i++){
        x=1;
        x=x<<(s[i]-97);
        if( (x&h) >0){
            cout<< s[i] <<" is Duplicate \n";
        }
        else{
            h=h|x;
        }
    }   
}