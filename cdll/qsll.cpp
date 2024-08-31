#include<iostream>
using namespace std;
struct node {
    int data;
    node* next;
};
class qsll{
   node *front;
   node *rear;
   public:
   qsll(){
    front = NULL;
    rear = NULL;
   }
   void insert(int val)
   {
      node* n= new node;
      if(front== NULL)
      front = n;
    //   front = n;
      n->data= val;
      n->next = rear;
      rear = n;
   }
   void display()
   {
      node* temp = rear;
      while (temp)
      {
        cout<<" "<<temp->data<<" ";
        temp=temp->next;
      }
   }
   void deletefront()
   {
      node* temp= rear;
      while (temp->next->next!= NULL)
      {
        temp= temp->next;
      }
      front = temp;
      delete temp->next;
      temp->next=NULL;
    

   }
   int Viewrear(){
    return rear->data;
   }
   int Viewfront()
{
    return front -> data;
}
~qsll(){
    node* temp= rear;
    while(temp)
    {   
       deletefront();
    }
}
int count(){
    int cnt=0;
    node* temp= rear;
    while(temp)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
// void reverse(qsll& b)
// {
//    int cnt=count();
//    int arr[cnt];
//    node* temp = b.rear;
//    for (int i=0; i<cnt;i++){
//     arr[i]=temp->data;
//     temp=temp->next;
//    }
//    int i=cnt-1;
//    temp= b.rear;
//     while(i)
//     {
//      temp->data= arr[i];
//      i--;
//      temp=temp->next;   
//     }
// }
qsll(qsll& b){
    front = NULL;
    rear = NULL;
    node* temp= b.rear;
    while( temp){
        intsert(temp->data);
        temp= temp->next;
    }
}
qsll& operator=(qsll& b){
    node* temp= b.rear;
    while( temp){
        intsert(temp->data);
        temp= temp->next;
    }
    return *this;
}

};
int main(){
    qsll a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.insert(5);
    a.insert(6);
    // a.deletefront();
    a.insert(7);
    // cout<<a.count();
    // a.display();
    qsll b=a;
    b.display();
    // cout<<a.Viewfront()<<" "<<a.Viewrear();
return 0;
}