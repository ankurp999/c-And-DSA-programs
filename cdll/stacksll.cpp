#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class stacksll
{
    node *top;

public:
    stacksll()
    {
        top = NULL;
    }
    void push(int val)
    {
        node *n = new node;
        n->data = val;
        n->next = top;
        top = n;
    }
    void display(){
        node* temp=top;
        while(temp){
            cout<<"|"<<temp->data<<"|"<<endl;
            temp=temp->next;
        }
    }
     int peek(){
        return top->data;
    }
    void pop(){
        node* temp= top;
    top=top->next;
    delete temp;
    }
    ~stacksll(){
        delete top;
    }
    
    void reverse()
    {
        node* temp= top;
        node* temp1= top;
        int c= count(),i=0;
        int arr[c];
        while (temp)
        {
           arr[i]=temp->data;
           temp=temp->next;
           i++;
        }
        i--;
        while (i>=0){
            temp1->data=arr[i];
            temp1=temp1->next;
            i--;
        }

    }
    int count()
    {
        node* temp= top;
        int cnt=0;
        while(temp)
        {
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
    stacksll(stacksll& a){
        top = NULL;
        node* temp= a.top;
        while(temp){
            push(temp->data);
            temp=temp->next;
        }
        reverse();
    }
    stacksll& operator=(stacksll& a){
        node* temp= a.top;
        while(temp){
            push(temp->data);
            temp=temp->next;
        }
        reverse();
        return *this;
    }
};
int main()
{
    stacksll s,d;
    s.push(2);
    s.push(3);
    s.push(4);
    stacksll a=s;
    //  cout<<a.count(a);
    // s.pop();
    // s.pop();
    s.display();
    // a.display();
    // a.reverse(a);
    // a.display();
    d=s;
    d.display();
    // cout<<s.peek();
    return 0;
}