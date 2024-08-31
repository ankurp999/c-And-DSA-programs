#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
  node *prev;
};
class deque
{
  node *front;
  node *rear;

public:
  deque()
  {
    front = NULL;
    rear = NULL;
  }
  void insert_at_rear(int val)
  {
    node *n = new node;
    n->data = val;

    if (front == NULL && rear == NULL)
    {
      front = n;
      rear = n;
      n->next = n->prev = NULL;
    }
    else
    {
      n->prev = NULL;
      n->next = rear;
      rear->prev = n;
      rear = n;
    }
  }
  void insert_at_front(int val)
  {
    node *n = new node;
    n->data = val;
    if (front == NULL && rear == NULL)
    {
      front = n;
      rear = n;
      n->next = n->prev = NULL;
    }
    else
    {
      front->next = n;
      n->prev = front;
      n->next = NULL;
      front = n;
    }
  }
  void display()
  {
    node *temp = rear;
    while (temp)
    {
      cout << " " << temp->data << " ";
      temp = temp->next;
    }
  }
  int getFront()
  {
    return front->data;
  }
  int getRear()
  {
    return rear->data;
  }
  void deleteFront()
  {
    node *temp = front;
    front->prev->next = NULL;
    front = temp->prev;
    delete temp;
  }
  void deleteRear()
  {
    node *temp = rear;
    rear = temp->next;
    rear->prev = NULL;
    delete temp;
  }
  ~deque()
  {
    node *temp = rear;
    while (temp)
    {
      deleteRear();
      temp = temp->next;
      //  cout<<" hcgf"<<endl;
    }
  }
  bool empty()
  {
    if (rear == NULL && front == NULL)
      return 1;
    return 0;
  }
  deque(deque& a)
  {
       rear= NULL;
       front= NULL;
       node *temp= a.rear;
       while(temp){

       insert_at_front(temp->data);
       temp= temp->next;
       }
  }
};
int main()
{
  deque a;

  a.insert_at_rear(1);
  a.insert_at_rear(2);
  a.insert_at_rear(3);
  a.display();
  // cout << endl;
  // a.deleteFront();
  // a.deleteFront();
  // a.deleteFront();


  // a.deleteFront();
  // a.deleteRear();
  // a.deleteRear();
  // a.display();
  cout << endl;
  deque b=a;
  b.display();
  // cout << a.getFront();
  // cout << a.getRear();

  return 0;
}