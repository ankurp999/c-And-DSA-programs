#include<iostream>
using namespace std;
struct node{
    node* prev;
    int data;
    node* next;
};
class CDLL {
    node* start;
    public:
    CDLL(){
        start = NULL;
    }
    void insertAtFirst(int data){
        node* n = new node;
        if(start== NULL){
            n->data =data;
            start= n;
            n->next=n;
            n->prev=n;
        }
        else{
        n -> data = data;
        n -> next = start;
        n -> prev = start -> prev;
        start->prev->next=n;
        start -> prev = n;
        start = n;
        }

    }
    void insertAtLAst(int data){
        node*n = new node;
        if(start== NULL)
        {
            insertAtFirst(data);
        }
        else{
            n->data=data;
            n->next=start;
            n->prev=start->prev;
            start->prev->next=n;
            start->prev=n;
        }
    }
    node* search(int data)
    {
        node* temp= start;
    while(temp->next!=start){
        if(data== temp->data)
        return temp;
        temp=temp->next;
    }
if (data == start -> prev -> data)
return start->prev;

    return NULL;
    }
    void insertAtany(int data1,int data2)
    {
        node* n=new node;
        n->data=data2;
        node*temp=search(data1);
        n->next=temp->next;
        temp->next->prev= n;
        temp->next=n;
        n->prev=temp;
    }
    void deletefirst(){
        node* temp=start;
        start->prev->next=start ->next;
        start->next->prev=start->prev;
        start=start->next;
        delete temp;
    }
    void deleteLAst(){
        node * temp=start->prev;
        start->prev->prev->next=start;
        start->prev=start->prev->prev;
        delete temp;
    }
    void display(){
        node* temp = start;
            // cout << temp -> data << " ";
        while(temp -> next != start){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout<< temp->data<< " ";
    }
    void deleteAny(int data){

        node* temp= search(data);
        if(temp== start)
        deletefirst();
        else{
        temp->prev->next= temp->next;
        temp->next->prev=temp->prev;
        delete temp;
        }
    }
    CDLL(CDLL &s ){
      node* temp= s.start;
      node* ren= s.start;
      start = NULL;
      while(temp!=ren->next);
      insertAtLAst(temp->data);
      temp=temp->next;
    }
    ~CDLL()
    {  
        node* temp=start;
        while(temp->next!=start)
        {
            cout<<" djhgcf"<<endl;
            deleteLAst();
        }
    }
};
int main(){
    CDLL c;
    c.insertAtFirst(34);
    c.insertAtFirst(45);
    c.insertAtFirst(46);
    c.insertAtFirst(47);
    c.insertAtLAst(33);
    c.insertAtany(33,44);
    // c.deletefirst();
    // c.deleteLAst();
    // c.deleteAny(44);
   CDLL d=c;
    d.display();
}