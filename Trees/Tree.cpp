#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
        int data;
        Tree*lc,*rc;
        void input();
};
void Tree :: input(){
    cout<<"Enter the element  :";
    int k;
    cin>>k;
    Tree*head = new Tree;
    queue<Tree*> q;
    head->data=k;
    q.push(head->lc);
    q.push(head->rc);
    while(!q.empty()){ 
        cout<<"Enter the element :";
        cin>>k;
        if(k==-1){
            return;
        }
        else{
            Tree*temp = new Tree;
            temp=q.front();
            q.pop();
            temp->data=k;
            temp->lc=temp->rc=NULL;
            q.push(temp->lc);
            q.push(temp->rc);
        }
    }
}
int main(){
    Tree* node = new Tree;
    node->input();
}