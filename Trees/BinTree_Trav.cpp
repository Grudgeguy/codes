#include<queue>
#include<iostream>
using namespace std;
//level order not working properly : fixed

class BT{
    private:    
        int data;
        BT *lc;
        BT *rc;
    public:
        BT(){
            data=0;
            lc=NULL;
            rc=NULL;
        }
        bool search(BT* root,int el);
        void level(BT * t);
        friend int main();
        void post(BT * t);
        void pre(BT * t);
        void in(BT * t);
        int height(BT*);
        int leaf(BT*);
        BT* push();
        void del(int el);
};

void BT :: del(int el){
    
}

void BT :: post(BT * t){
    if(t!=NULL){
        in(t->lc);
        in(t->rc);
        cout<<"Data is " <<t->data<<endl;
    }
}

void BT :: in(BT * t){
    if(t!=NULL){
        in(t->lc);
        cout<<"Data is " <<t->data<<endl;
        in(t->rc);
    }
}
void BT :: pre(BT * t){
    if(t!=NULL){
        cout<<"Data is " <<t->data<<endl;
        pre(t->lc);
        pre(t->rc);
    }
}

void BT :: level(BT* t){
    queue <BT *> tbq;
    tbq.push(t);
    cout<<"Root is "<<t->data<<endl;
    while(tbq.size()!=0){
        if(tbq.front()->lc!=NULL){
        cout<<tbq.front()->lc->data<<" ";
        tbq.push(tbq.front()->lc);
        }
        if(tbq.front()->rc!=NULL){
            tbq.push(tbq.front()->rc);
            cout<<tbq.front()->rc->data<<" ";
        }
        tbq.pop();
    }
}

int BT :: leaf(BT* k){
    static int c;
    if(k==NULL){
        c++;
    }
    else{
        leaf(k->lc);
        leaf(k->rc);
        return c/2;
    }
}
BT* BT ::  push(){
queue <BT*> q;
    int el;
    cout<<"Enter Root : ";
    cin>>el;
    BT *root = new BT;
    root->data=el;
    q.push(root);
    while(q.size()!=0){
        BT *temp= new BT;
        temp =q.front();
        q.pop();
        cout<<"Enter LC : ";
        cin>>el;
        if(el!=-1){
            BT *t1 = new BT;
            temp->lc = t1;
            t1->data=el;
            q.push(t1);
        }
        cout<<"Enter RC : ";
        cin>>el;
        if(el!=-1){
            BT *t2 = new BT;
            temp->rc = t2;
            t2->data=el; 
            q.push(t2);
        }
    }
    return root;
}
int BT :: height(BT* k){
    if(k==NULL){
        return 0;
    }
    return max(1 + height(k->lc),1+height(k->rc));
}
//Searching algo only for Binary search trees
bool BT :: search(BT * root,int el){
    if(root==NULL){
        return 0;
    }
    if(el==root->data){
        cout<<"Comparing with : "<<root->data<<endl;
        return 1;
    }
    else if(el < root->data) {
        cout<<"Comparing with : "<<root->data<<endl;
        return search(root->lc,el);
    }
    else{
        cout<<"Comparing with : "<<root->data<<endl;
        return search(root->rc,el);
    }
}

int main(){
    BT *b=b->push();
    cout<<"Post\n";
    b->post(b);
    cout<<"Pre \n";
    b->pre(b);
    cout<<"In \n";
    b->in(b);
    cout<<"Level \n";
    b->level(b);
    cout<<endl;
    // while(1){
    //     int ser;
    //       cin>>ser;
    //     cout<<b->search(b,ser)<<endl;
    // }
    cout<<b->leaf(b);
}