#include<iostream>
using namespace std;
struct array{
    int size;
    int length;
    int *arr;
};
void display(struct array de){
    for(int i=0;i<de.length;i++){
        cout<<de.arr[i]<<"\t";
    }
}
void append(struct array de,int el){
    de.arr[de.length]=el;
    de.length++;
    display(de);

}
void insert(struct array *de,int el,int idx){
    for(int i=(*de).size-1;i>=idx;i--){
        de->arr[i+1]=de->arr[i];
    }
    de->arr[idx]=el;
    de->length++;
}
void del(struct array *de,int idx){
    for(int i=idx;i<de->length-1;i++){
        de->arr[i]=de->arr[i+1];
    }
    de->length--;
    display(*de);
}
void search(struct array *de,int el){
    int f=0;
    for(int i=0;i<de->length;i++){
        if(de->arr[i]==el){
            cout<<"Element found at index "<<i<<endl;
            f=1;
        }
    }
    if(f==0){
        cout<<"Element not found\n";
    }
}
void inSorted(struct array *de, int el){
    for(int i=(*de).length-1;;i--){
        if(el<de->arr[i]){
            de->arr[i+1]=de->arr[i];
        }
        else{
            de->arr[i+1]=el;
            break;
        }
    }
    de->length++;
    display(*de);
}
void Rearrange(struct array *de){
    int i=0,j=de->length-1;
    while(i<j){
        if(de->arr[j]<0 && de->arr[i]>0){
            swap(de->arr[i],de->arr[j]);
            i++;
            j--;
        }
        else if(de->arr[j]>0 && de->arr[i]<0){
            i++;j--;
        }
        else if(de->arr[j]>0 && de->arr[i]>0){
            j--;
        }
        else if(de->arr[j]<0 && de->arr[i]<0){
            i++;
        }
    }
    display(*de);
}
struct array mSorted(struct array *de1,struct array *de2){
    int i=0,j=0;
    struct array *de=new struct array;
    de->length=de1->length+de2->length;
    de->size=de1->size+de2->size;
    de->arr=new int[de->size];
    while(i+j<de->length){
        if(de1->arr[i]<de2->arr[j]){
            de->arr[i+j]=de1->arr[i];
            i++;
        }
        else{
            de->arr[i+j]=de2->arr[j];
            j++;
        }
    }
    return *de;
}
int main(){
    // struct array de,d1,d2;
    // cout<<"Enter size of the array :\n";
    // cin>>de.size;
    // cout<<"Enter the number of elements you wish to enter :\n";
    // cin>>de.length;
    // de.arr=new int[de.size];
    // for(int i=0;i<de.length;i++){
    //     cin>>de.arr[i];
    // }
    // inSorted(&de,4);
    // Rearrange(&de);
    struct array d1,d2;
    cout<<"Enter the sizes for the arrays : ";
    cin>>d1.size>>d2.size;
    cout<<"Enter the lengths for the array : ";
    cin>>d1.length>>d2.length;
    d1.arr=new int[d1.size];
    d2.arr=new int[d2.size];
    for(int i=0;i<d1.length;i++){
        cin>>d1.arr[i];
    }
    for(int i=0;i<d2.length;i++){
        cin>>d2.arr[i];
    }
    struct array d=mSorted(&d1,&d2);
    display(d);
    return 0;
}