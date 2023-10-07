#include<bits/stdc++.h>
#define pb push_back
using namespace std;
class li{
    public:
        int net,wei;
        void ins(int net , int wei);
};
void li :: ins(int net,int wei){
    this->net =net;
    this->wei=wei;
    
}
int main(){
    vector<vector<li>> v;
    li t;
    t=t->ins(1,1);
    for(int i=0;i<4;i++){
        v.pb(vector<li> ());
    }
    v.pb(v.pb(t));

}