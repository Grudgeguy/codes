#include<iostream>
#include<vector>
using namespace std;

class tree{
    int data;
    vector <tree*> child;
    public:
        tree(int data){
            this->data=data;
        }
        tree *input();
        friend void trav(tree* root);
        void trav();
        int height(tree*);
};
int tree :: height(tree* root){
}
tree* tree :: input(){
    cout<<"Enter Element : ";
    int el;
    cin>>el;
    tree* root = new tree(el);
    cout<<"Enter Number of Children : ";
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        tree *chil = input();
        root->child.push_back(chil);
    }
    return root;
}

void trav(tree *root){
    cout<<root->data;
    for(int i=0;i<root->child.size();i++){
        // trav(root->child[i]);
        cout<<root->child[i]->data<<" ";
    }
    for(int i=0;i<root->child.size();i++){
        trav(root->child[i]);
    }
}

void tree :: trav(){
    cout<<data<<" ";
    for(int i=0;i<child.size();i++){
        // child[i]->trav();
        cout<<child[i]->data<<" ";
    }
}

int main(){
    tree *t=t->input();
    t->trav();
    // trav(t);
}