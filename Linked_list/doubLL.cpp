#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *prev,*next;
};
node* input(node* head){
    node *temp=new node;
    int k;
    cin>>k;
    head->data=k;
    head->prev=NULL;
    head->next=NULL;
    while(k!=-1){
        cin>>k;
        node* tail = new node;
        if(head->next==NULL){
            tail->data=k;
            tail->next=NULL;
            tail->prev=head;
            head->next=tail;
        }
        else{
            tail->data=k;
            tail->next=NULL;
            tail->prev=temp;
            temp->next=tail;
        }
        temp=tail;
    }
    return head;
}
void pcw(node* head){
    while(head->next!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void pacw(node* temp){
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp=temp->prev;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
node* ins(node* head,int pos, int el){
    node *kk=new node;
    if(pos==0){
        node *temp= new node;
        temp->data=el;
        temp->next=head;
        temp->prev=nullptr;
        head->prev=temp;
        return temp;
    }
    else{
        node *temp=new node;
        int k=0;
        while(head->next!=NULL){
            if(k==pos){ 
                node* tail =new node;
                tail->data=el;
                tail->next=head;
                temp->next=tail;
                break;
            }
            temp=head;
            head=head->next;
        }
    }
    return kk;
}
int main(){
    node* head = new node;
    head=input(head);
    int pos,el;
    cin>>pos>>el;
    ins(head,pos,el);
    pcw(head);    
    // pacw(head);
}