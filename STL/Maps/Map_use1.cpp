#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<iostream>
using namespace std;
int main(){
    // map <int,int> m;
    // vector <int> v={2,2,3,3,2,2,3,4,5,6,4,6,3,6,4,2,5};
    // for(int i=0;i<v.size();i++){
    //     m[v[i]]++;
    // }
    // // map<int,int> :: iterator j;
    // // for(auto j=m.begin();j!=m.end();++j){
    // //     // cout << (*j).first <<" is present "<<(*j).second<<"\n";
    // //     cout<<j->first<<" is present "<<j->second<<" times\n";
    // // }
    // m.insert({2,1});// cannot update a map like this since map of 2 is predefined
    // m[9]=4;
    // for(auto p : m){
    //     cout<<p.first<<" present times "<<p.second<<"\n";
    // }
    // auto it=m.find(2);
    // cout<<(*it).second;     
    unordered_map <int,string> m;
    m[1]="abc";
    m[2]="bc";
    m[3]='c';
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }
}