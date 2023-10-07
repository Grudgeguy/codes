#include<set>
#include<iostream>
using namespace std;
void print(set<string> &s){
    for(auto k : s){
        cout<<k<<endl;
    }
}
int main(){
    set<string> s;
    s.insert("abd");
    s.insert("adas");
    s.insert("abc");
    s.insert("gre");
    auto it=s.find("abd");
    cout<<&(*it)<<"\n";
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<"\n";
    }
    print(s);
}