#include<iostream>
using namespace std;
int main(){
    string s,s1;
    int f=0;
    cin>>s;
    cin>>s1;
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        arr[s[i]-97]++;
    }
    for(int i=0;i<s1.length();i++){
        arr[s1[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]%2!=0){
            cout<<"Not an anagram\n";
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"An anagram\n";
    }
}