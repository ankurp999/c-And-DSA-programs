#include<iostream>
using namespace std;
struct node{
    int pno;
    int data;
    node* next;
};
class prqueue
{
   node * start;
   public:
   prqueue(){
    start = NULL;
   }
   void insert(int data,int p)
   {
      node* n= new node;
      n->data = data;
      n-> pno = p;
      if(start == NULL || n->pno > start-> pno)
      {
         n->next = start;
         start= n;}
         else{
            node* temp =start;
            while(temp->next != NULL){
                if(temp->next->pno < n->pno)
                break;
                temp=temp->next;
            }
            n->next= temp->next;
            temp->next =n;
         }
   }
   void deleteHighest()
   {
     node* temp =start;
     start = start->next;
     temp->next = NULL;
     delete temp;
   }
   void display()
   {
       node *temp= start;
       while(temp){
        cout<<" "<<temp-> data <<" ";
        temp = temp->next;
       }
   }
   int highestprio_element()
   {
     return start->data;
   }
   int highestprio_number()
   {
     return start->pno;
   }
   ~prqueue(){
     node *temp=start;
     while(temp){
        deleteHighest();
        temp = temp->next;
     }
   }
   
};
int main(){
    prqueue a;
    a.insert(2,45);
    a.insert(20,40);
    a.insert(30,66);
    a.deleteHighest();
    a.display();

return 0;
}