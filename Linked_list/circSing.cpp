#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int data);
        node(node* head);
        node* create();
        void display();
        void del(int idx, node* head);
        int len();
        node* insert(int pos,int el);
};
node* node :: insert(int pos,int el){
    int k=this->len();
    node* temp = new node(this);
    if(pos<=k){
        if(pos==0){
            node* temp = new node(this);
            node* ins = new node(temp);
            // ins= temp; line doesnt work
            ins->data = temp->data;
            ins->next = temp->next;
            this->data=el;
            this->next=ins;
        }
        else if(pos==k){
            node *temp = new node(this);
            for(int i=0;i<pos-1;i++){
                temp=temp->next;
            }
            node* ins = new node(el);
            // node* add  = new node(this); this line has memeory error 
            temp->next = ins;
            ins->next=this;
        }
        else{
            for(int i=0;i<pos-1;i++){
                temp=temp->next;
            }
            node *add = new node(temp->next);
            node* ins = new node(el);
            temp->next=ins;
            ins->next=add;
        }
    }
    this->display();
}
int node :: len(){
    int count=0;
    node * temp = new node(this);
    do{
        count++;
        temp=temp->next;
    }while(temp!=this);
    return count;
}
void node ::  display(){
    node* temp = new node(this);
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=this);
}
node :: node(int data){
    this->data=data;
    this->next=NULL;
}
node :: node(node* head){
    this->data=head->data;
    this->next=head->next;
}
node* node :: create(){
    int k;
    cin>>k;
    node *head = new node(k);
    node *tail = head;
    while(1){
        cin>>k;
        if(k==-1){
            tail->next=head;
            return head;
        }
        node *temp = new node(k);
        tail->next=temp;
        tail=tail->next;
    }
    return head;
}
void node :: del(int idx,node* head){
    int k = this->len();
    node* temp = new node(this);
    if(idx<k){
        for(int i = 0; i < idx-1 ; i++){
            head = head->next;
        }
        node* add = new node(head->next);
        head=head->next->next;
        delete add;
        cout<<"Deletion successfull\n";
    }
}
int main(){
    node *n;
    n=n->create();
    n->display();
    cout<<endl;
    cout<<n->len()<<endl;
    n->insert(5,15);
    n->del(1,n);
    n->display();
}