#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void merge(node l1,node l2){
        node*head = new node;
        node*tail = new node;
        tail=head;
        bool f=0;
        while(l1.data != NULL && l2.data !=NULL){
            if(l1.data<l2.data && f==0){
                head->data=l1.data;
                head->next=NULL;
                f=1;
            }
            else if(f==1){
                node* temp = new node;
                tail->next=temp;
                if(l1.data<l2.data){
                    temp->data=l1.data;
                    temp->next=NULL;
                }
                else{
                    if(l1.data<l2.data){
                        temp->data=l2.data;
                        temp->next=NULL;
                    }
                }
                tail=tail->next;
            }
        }
    }
node* input(){
    node *head= new node;
    node *temp=new node;
    int k;
    cin>>k;
    head->data=k;
    head->next=NULL;
    while(k!=-1){
        cin>>k;
        node *tail=new node;
        if(head->next==NULL){
            tail->data=k;
            tail->next=NULL;
            head->next=tail;
        }
        else{
            tail->data=k;
            tail->next=NULL;
            temp->next=tail;
        }
        temp=tail;
    }
    return head;
}
void print(node *head){
    while(head->next!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* insert(node *head,int pos,int el){
    int k=0,f=0;
    if(pos==0){
        f=1;
        node *ins=new node;
        ins->data=el;
        ins->next=head;
        return ins;
    }
    else{
        while(head!=NULL){
            if(k==pos){
                f=1;
                node *ins=new node;
                ins->data=el;
                ins->next=head->next;
                head->next=ins;
                break;
            }
            head=head->next;
            k++;
            return head;
        }
    }
    if(f==0){
        cout<<"Out of Bounds\n";
    }
    return head;
}
node* del(node *head,int pos){
    int k=0;
    node *kk=new node;
    kk=head;
    if(pos==0){
        return head->next;
    }
    else{
        node *temp= new node;
        while(head!=NULL){
            if(k==pos){
                temp->next=head->next;
                break;
            }
            temp=head;
            head=head->next;
            k++;
        }
    }
    return kk;
}
node* arrange(node *head){
    node *n = new node;
    node *temp= new node;
    temp=n;
    int c=0;
    n=head;
    while(n->next!=NULL){
        n=n->next;
        c++;
    }
    n=head;
    if(c%2==0){
        for(int i=0;i<(c/2);i++){
            cout<<n->data<<" ";
            n=n->next->next;
        }
        n->next=head->next;
        for(int i=0;i<c/2;i++){
            n=n->next->next;
        }
        n->next=NULL;
        print(temp);
    }
}
int main(){
    node *head;
    head=input();
    // print(head);
    int pos,el;
    cin>>pos;
    head=del(head,pos);
    // cin>>el>>pos;
    // head=insert(head,pos,el);
    print(head);
    arrange(head);
}