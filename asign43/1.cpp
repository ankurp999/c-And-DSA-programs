#include<iostream>
struct node
{
    int data;
    node *next;
};
using namespace std;
class SLL{
    node* start;
    public:
    SLL(){
        start=NULL;
    } 
    void INsertAtBeginning(int data){
        node *n = new node;
        n->data=data;
        n->next=start;
        start=n; 
    }
    void display(){
        node *temp=start;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"bass ho gya";
    }
    void INsertAtLast(int data){
        node *n=new node,*temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        } 
         n->data=data;
        n->next=NULL;
        temp->next=n;
    }
    bool search(int data){
        node *temp=start;
        while(temp!=NULL){
            if(temp->data==data)
            return 1;
            temp=temp->next;
        }
        return 0;
    }
    int count(){
        node *temp=start;
        int i=0;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        return i;
    }
    void Insert(int a,int data){
        node *temp=start;
        node *n=new node;
            int i=1;
            if(a==1)
            INsertAtBeginning(data);
            else{
            while(i++<a-1 && temp->next!=NULL){
                temp=temp->next;
             }
           if(temp==NULL)
           INsertAtLast(data);
           n->data=data;
           n->next=temp->next;
           temp->next=n;
           }
    }
    void delFirst(){
        node *temp=start;
        start=temp->next;
        delete temp;
    }
    void delLast(){
        node *temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        delete (temp);
        temp->next=NULL;
    }
    void delany(int a){
        node *temp=start;
        node *ptr=NULL;
        int i=1;
        while(i++<a-1 && temp->next!=NULL){
          temp=temp->next;
        }
        ptr=temp->next;
          temp->next=ptr->next;
          delete ptr;
          
    }
};
int main(){
    SLL o1;
    o1.INsertAtBeginning(1);
    o1.INsertAtBeginning(2);
    o1.INsertAtBeginning(4);
    // o1.INsertAtLast(3);
    // o1.Insert(3,5);
    // o1.Insert(1,6);
    // o1.delany(3);
    // o1.delFirst();
    // o1.delLast();
    o1.display();
    // cout<<endl<<o1.count();
return 0;
}