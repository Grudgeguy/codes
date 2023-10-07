    #include<bits/stdc++.h>
    using namespace std;
    #define s cout<<"success\n";
    class LL{
        public:
            int data;
            LL* next;
    };
    void topo(LL* arr[]){
        queue<int> q;
        LL* temp= new LL;
        int ind[5]={0},vis[5]={0};
        for(int i=0;i<5;i++){
            temp=arr[i];
            while(temp!=NULL){
                ind[temp->data]++;
                temp=temp->next;
            }
            if(ind[i]==0){
                q.push(i);
            }
            // cout<<ind[i]<<endl;
        }
        while(q.size()!=0){
            int u = q.front();
            q.pop();
            vis[u]=1;
            cout<<u<<" ";
            temp=arr[u];
            while(temp!=NULL){
                // cout<<temp->data;
                --ind[temp->data];
                if(ind[temp->data]==0){
                    q.push(temp->data);
                }
                temp=temp->next;
            }
        }
    }
    int main(){
        LL **temp = new LL*;
        LL **arr = new LL*[5];
        for(int i=0;i<5;i++){
            arr[i] = new LL;
            arr[i]->next=NULL;
        }
        temp = arr;
        arr[0]->data=2;
        LL* t = new LL;
        t->data=3;
        t->next=NULL;
        arr[0]->next=t;

        arr[1]->data= 3;
        LL* t1 = new LL;
        t1->data= 4;
        arr[1]->next=t1;
        t1->next=NULL;

        arr[2]->data=3;
        arr[2]->next=NULL;

        arr[3]=NULL;
        arr[4]=NULL;

        topo(arr);
    }// v[i]