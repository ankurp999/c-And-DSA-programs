#include<iostream>
using namespace std;
struct node
{
    node* next;
    int data;
};
class CLL
{
    public:
    node* last;
    CLL(){
       last=NULL;
    }
    void InsertAtStart(int data)
    {
       node* n=new node;
       n->data=data;
       if(last!=NULL)
       {n->next=last->next;
       last->next=n;}
       else 
       {
        last=n;
        n->next=n;
       }
    }
    void InsertAtend(int data)
    {
        if(last==NULL)
        InsertAtStart(data);
        else{
        node* n=new node;
        n -> data = data;
        n->next=last->next;
        last->next=n;
        last=n;
        }
    }
    node* search(int data){
        node* temp=last->next;
        temp=temp->next; 
        while(temp!=last->next){
            if(temp->data==data)
            return temp;
            temp=temp->next;
        }
        return NULL;
    }
    void Insertnay(int psn,int data)
    {
        node* temp= search(psn);
        node* n=new node;
        n->data=data;
        n->next=temp->next;
        temp->next=n;
    }
    void deleteFirst(){
        node* temp=last->next;
        if(temp -> next == temp){
        delete temp;
        last = NULL;
        }
        else {
        last->next=last->next->next;
        delete(temp);
        }
    }
    void deleteLast()
    {
        node* temp=last->next;
        node* ls = last;
        while(temp -> next !=last)
        {
            temp=temp->next;
        }
        temp -> next = last -> next;
        last = temp;
        delete ls;
        
    }
    void display()
    {
        node* temp=last->next;
        cout<<temp->data<<" ";
        temp=temp->next;
        while(temp!=last->next){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void Deleteany(int psn)
    {
        node* temp=search(psn);
        if(temp==last)
        deleteLast();
        else if(temp == last->next)
        deleteFirst();
        else{
        node* t=last->next;
        while(t->next!=temp)
        {
            t=t->next;
        }
        t->next=temp->next;
        delete temp;
        }
    }
};
int main(){
    CLL o1;
    o1.InsertAtStart(6);
    o1.InsertAtStart(7);
    // o1.InsertAtStart(8);
    // o1.InsertAtend(9);
    // o1.Insertnay(7,5);
    // o1.deleteFirst();
    o1.deleteLast();
o1.Deleteany(8);
    o1.display();
    // cout<<"--"<<o1.search(3);
return 0;
}