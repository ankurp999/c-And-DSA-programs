#include<iostream>
using namespace std;
class Stack{
    int capacity;
    int top;
    int* ptr;
    public:
    Stack(int capacity)
    {
        this->capacity=capacity;
      ptr= (int*)malloc(capacity*sizeof(int));
      top = -1;
    }
    void push(int a)
    {
     top++;
     ptr[top]=a;
    }
    int peek(){
        return ptr[top];
    }
    void pop(){
        top--;
    }
    ~Stack(){
        delete ptr;
    }
    bool StackOverflow(){
        if(top== (capacity-1))
        return 1;
        else
        return 0;
    }
    bool StackUnderflow(){
        if(top== -1)
        return 1;
        else
        return 0;
    }
    void display(){
        int temp=top;
        while(temp>=0)
        {
            cout<<"|"<<ptr[temp--]<<"|"<<endl;
        }
    }
    Stack( Stack& a){
        capacity= a.capacity;
        ptr = (int *)malloc(capacity*sizeof(int));
        top=0;

        while(a.top>=0){
            ptr[top]=a.ptr[top];
            top++;
            a.top--;
        }
        --top;
    }
    Stack& operator=( Stack& a){
        capacity= a.capacity;
        ptr = (int *)malloc(capacity*sizeof(int));
        top=0;

        while(a.top>=0){
            ptr[top]=a.ptr[top];
            top++;
            a.top--;
        }
        --top;
    return *this;
    }
};
int main(){
Stack a(6);
a.push(1);
a.push(2);
a.push(3);
a.push(4);
// a.display();
Stack b(6);
b=a;
b.display();
return 0;
}