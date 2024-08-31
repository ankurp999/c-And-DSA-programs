#include <iostream>
using namespace std;
class queue
{
    int capacity;
    int front, rear;
    int *ptr;

public:
    queue(int capacity)
    {
        this->capacity = capacity;
        ptr = (int *)malloc(capacity * sizeof(int));
        rear = -1;
        front = -1;
    }
    void insert(int value)
    {    
        if(((rear == capacity)) && front >=0)
        { 
            rear=0;
            // ptr[rear]=value;
            // rear++;
        }
        if(rear<=capacity-1){
         if (front == -1){
            front++;
            rear=0;
         }
        ptr[rear] = value;
            // cout << ptr[0]<<"  "<<rear<<" dsd";
        rear++;
        }
        
    }
    void display()
    {
        if(rear<=front)
        {
            int j=1;
            // cout << ptr[0]<<"jbj";
            cout << "<<";
            int k=front;
        while (j <= capacity-front+rear)
        {
            if(k>=capacity)
            k=k-capacity;
            cout << " " << ptr[k] << " ";
            k++;
            j++;
            
        }
        cout << ">>"<<endl;
        }
        else{
        int i = front;
        cout << "<<";
        while (i < rear)
        {
            cout << " " << ptr[i] << " ";
            i++;
        }
        cout << ">>"<<endl;
        
        }
    }
    int rearView()
    {
        return rear;
    }
    void deleteFRONT()
    {
        front++;
    }
    ~queue()
    {
        delete ptr;
    }
    bool overFlow()
    {
        if (rear == capacity - 1 && front == 0)
            return 1;
        return 0;
    }
    bool underFlow()
    {
        if (rear == -1 && front == -1)
            return 1;
        return 0;
    }
    // int no_of_elements()
    // {
    //     return ptr[0];
    // }
    queue(queue &a)
    {
        capacity = a.capacity;
        front = a.front;
        int i=front;
        rear = a.rear;
        ptr =(int*)malloc(capacity*sizeof(int));
            while (i<=rear)
            {
                ptr[i]=a.ptr[i];
                i++;
            }
    }
    queue& operator=(queue &a)
    {
        // capacity = a.capacity;
        front = a.front;
        int i=front;
        rear = a.rear;
        // ptr =(int*)malloc(capacity*sizeof(int));
            while (i<=rear)
            {
                ptr[i]=a.ptr[i];
                i++;
            }
            return *this;
    }
};
int main()
{
    queue a(5);
    a.insert(1);
    // cout<<a.rearView()<<"<--";

    a.insert(2);
    // cout<<a.rearView()<<"<--";
    a.insert(3);
    // cout<<a.rearView()<<"<--";
    a.insert(4);
    // cout<<a.rearView()<<"<--";
    a.insert(5);
    // cout<<a.rearView()<<"<--";
    a.deleteFRONT();
    a.deleteFRONT();
    a.deleteFRONT();
    a.deleteFRONT();
    // a.deleteFRONT();
    
    a.display();
    // a.insert(6);
    // a.insert(7);
    // a.insert(8);
    // cout<<a.no_of_elements()<<"<--";
    // a.insert(6);
    // cout<<a.rearView()<<"<--";
    // queue b=a;
    // a.display();
    // b.display();
    // c=a;
    // c.display();
    // cout<<a.no_of_elements();

    return 0;
}