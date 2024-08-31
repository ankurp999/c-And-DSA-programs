#include<iostream>
using namespace std;
struct node
{
   node* prev;
   int data;
   node* next;
};
class DLL
{
    node *start;
    public:
    DLL(){
        start=NULL;
    }
    DLL(DLL &d){
        node* temp=d.start;
        start=NULL;
        while(temp!=NULL)
        {
            InsertAtEnd(temp->data);
            temp=temp->next;
        }
    }
    DLL& operator=(DLL &d){
        node* temp=d.start;
        start=NULL;
        while(temp!=NULL)
        {
            InsertAtEnd(temp->data);
            temp=temp->next;
        }
        return *this;
    }
    void InsertAtStart(int data)
    {
       node* n=new node;
       n->data=data;
       n->prev=NULL;
       n->next=start;
       if(start != NULL)
       start -> prev = n;
       start=n;
    }
    void InsertAtEnd(int data)
    {
        if(start == NULL)
        InsertAtStart(data);
        else{
        node *temp=start;  
        node *n=new node;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=n;
        n->next=NULL;
        n->data=data;
        n->prev=temp;
        }
    }
    void display()
    {
       node *temp=start;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl<<"done";
    }
    node* search(int data)
    {
        node *temp=start;
        while(temp)
        {
            if(temp->data==data)
            return temp;
            temp=temp->next;
        }
        return NULL;
    }
    void InsertAtSpecific(node* spf,int data)
    {
        node *n=new node;
        if(spf==NULL || spf->next==NULL)
        InsertAtEnd(data);
        else{
        n->data=data;
        n->next=spf->next;
        n->prev=spf;
        spf->next=n;
        spf->next->prev=n;
        }
    }
    void DeleteFirst(){
        node*temp=start;
        temp->next->prev= NULL;
        start=temp->next;
        delete(temp);
    }
    void DeleteAtENd()
    {
        node *temp=start;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->prev->next=NULL;
        delete(temp);
    }
    void Deleteany(int a){
        node* temp=search(a);
        if(temp->prev==NULL)
        DeleteFirst();
        else{
        temp->prev->next=temp->next;
        temp->next->prev=temp -> prev;
        delete temp; 
        }
    }
    ~DLL(){
        while(start)
        DeleteAtENd();
    }
};
int main(){
    DLL o1;
    o1.InsertAtStart(5);
    o1.InsertAtStart(6);
    o1.InsertAtEnd(7);
    o1.InsertAtEnd(8);
    // o1.InsertAtSpecific(o1.search(6),7);
    o1.InsertAtSpecific(o1.search(8),9);
    // o1.DeleteFirst();
    // o1.DeleteAtENd();
    // o1.Deleteany(5);
      DLL o2;
      o2=o1;
      o2.display();
    o1.display();
}