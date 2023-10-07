    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        vector<int> v{1,2,3,4,5};
        v.push_back(15);
        for(auto x : v){
            cout<<x<<",";
        }
        cout<<endl;
        v.insert(v.begin(),4,100);
        for(auto k : v){
            cout<<k<<",";
        }
        cout<<endl; 
        v.erase(v.begin(),v.begin()+3);
        for(auto k : v){
            cout<<k<<",";
        }
        cout<<v.size()<<" "<<v.capacity()<<" "<<v.max_size();
        cout<<endl;
        v.resize(4);
        for(auto k : v){
            cout<<k<<",";
        }
         v.resize(40);
         for(auto k : v){
            cout<<k<<",";
        }
        v.clear();
        for(auto k : v){
            cout<<"empty or not";
            cout<<k<<",";
        }
    }