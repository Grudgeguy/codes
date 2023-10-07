#include<iostream>
using namespace std;
int main(){
    string s;
    int v=0,sp=0,sm=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='u'||s[i]=='o'||s[i]=='i'||s[i]=='e'||s[i]=='a'||s[i]=='O'||s[i]=='I'||s[i]=='E'||s[i]=='A'||s[i]=='U'){
            v++;
        }
        else if(s[i]==' '){
            sp++;
        }
    }
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==' ' && s[i+1]!=' '){
            sm++;
        }
    }
    cout<<"Vowels : "<<v<<endl;
    cout<<"Consonants : "<<s.length()-sp-v<<endl;
    cout<<"Words : "<<sm+1;

}