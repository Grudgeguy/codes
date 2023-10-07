#include<iostream>
using namespace std;
class bst{
    private:
        int data;
        bst *left;
        bst *right;
    public:
        bst* del( int el);
        friend int main();
        bst(int data){
            this->data = data;
            left=right=NULL;
        }
        bst* insert(int el);
        void in(){
            if(this!=NULL){
                cout<<this->data<<endl;
                left->in();
                right->in();
            }
        }
        void input(){
            int k=0;
            while(k!=-1){
                cout<<"Enter element : ";
                cin>>k;
                this->insert(k);
            }
        }
};
bst* bst :: insert(int el){
    if(this==NULL){
        bst* temp = new bst(el);
        cout<<"Insertion Successfull \n";
        return temp;
        // cout<<"success\n";
        // return  new bst(el);
    }
    else if(el<this->data){
        this->left=this->left->insert(el);
    }
    else if(el>this->data){
        this->right=this->right->insert(el);
    }
}
//issue in deleting a node connected to two nodes(actually not even coded that lol)
bst* bst :: del(int el){
    if( this->data==el && this->left == NULL && this->right == NULL ){
        cout<<"Deleted succes\n";
        return NULL;
    }
    else if(this->data==el && this->left==NULL){
        bst *k;
        k=this->right;
        delete this;
        return k;
    }
    else if(this->data==el && this->right==NULL){
        bst *k;
        k=this->left;
        delete this;
        return k;
    }
    // else if(this->data!=el && this->left==NULL && this-> right == NULL){
    //     cout<<"Elem not present\n";
    //     return NULL;
    // }
    else if(el < this->data){
        this->left = this->left->del(el);
    }
    else if(el > this->data){
        this->right = this->right->del(el);
    }
}

int main(){
    bst *k=NULL;
    k=k->insert(20);
    k=k->insert(30);
    k=k->insert(40);
    k=k->insert(50);
    k=k->insert(60);
    k=k->insert(70);
    k=k->insert(90);
    k->in();
    // cout<<k->data;
    k->del(300);
    k->in();
}