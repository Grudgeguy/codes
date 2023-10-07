    #include<bits/stdc++.h>
    using namespace std;
    vector<int>q;
    vector<vector<int>>k;
    void subseq(vector<int>v, int size, int i){
        if(i>=size) {
            k.push_back(q);
            return ;
        }
        q.push_back(v[i]);
        subseq(v,size,i+1);
        q.pop_back();
        subseq(v,size,i+1);
        return ;
    }
    int main(){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &i : v) cin>>i;
        cout<<endl;
        subseq(v,v.size(),0);
        for(auto &i : k){
            for(auto &j : i) cout<<j<<" ";
            cout<<endl;
        }
    }