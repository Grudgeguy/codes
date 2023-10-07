#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int f=0;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            cout<<"Not a palindrome\n";
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"Palindrome\n";
    }
}