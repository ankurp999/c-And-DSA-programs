#include<iostream>
using namespace std;
class Array{
    private:
    int capacity;
    int LastIndex;
    int *ptr;
    public:
    Array(int size)
    {
        ptr=new int(size);
        capacity=size;
        LastIndex= -1;
    }
    bool isEmpty();
    void append(int);
    void Insert(int ,int);
    void Edit(int ,int);
    void Delete(int);
    bool check();
    int get(int a){
        return *(ptr+a);
    }
    int count(){
        return LastIndex+1;
    }
    ~Array(){
        delete(ptr);
    }
    int findTheElement(int);
    void display(){
        int i=0;
        while(i<=LastIndex)
        cout<<*(ptr+i++)<<" ";
    }
};
int Array::findTheElement(int a){
    int i=0;
    while(i<=LastIndex){
        if(a==*(ptr+i++))
        return i;
    }
    return -1;
}
bool Array::check(){
   if(LastIndex==(capacity-1))
   return 1;
   return 0;

}
void Array::Delete(int a)
{
    if(a<=LastIndex)
    { 
          while(a<LastIndex)
          {
             *(ptr+a)=*(ptr+a+1);
             a++;
          }
          LastIndex--;
    }
    else
    cout<<"not allowed to access illegal memory";
}
void Array::Edit(int a,int b)
{
    if(a>LastIndex){
        cout<<"not allowed to access illegal memory";
    }
    else
    {
        *(ptr+a)=b;
    }
}
void Array::Insert(int a,int b)
{
    if(a<=capacity)
    {
        if(a<=LastIndex)
        {
            int temp=LastIndex;
            while(temp>=a)
            {
            *(ptr+temp+1)=*(ptr+temp);
            temp--;
            }
            *(ptr+a)=b;
        }
        LastIndex++;
    }
    
}
bool Array:: isEmpty(){
    if(LastIndex==-1)
    return 1;
    return 0;
}
void Array::append(int a)
{  
     if(LastIndex<=(capacity-1)){
    LastIndex++;
    *(ptr+LastIndex)=a;  
    }
    else
    cout<<"not available"; 
}
int main(){
    Array o1(9);
    o1.append(2);
    o1.append(5);
    o1.append(6);
    o1.Insert(2,3);
    o1.Edit(2,8);
    o1.Delete(2);
    cout<<o1.check()<<endl;
    cout<<o1.count()<<endl;
    cout<<o1.findTheElement(7)<<endl;
    cout<<o1.get(1)<<endl;
    cout<<o1.isEmpty()<<endl;
    o1.display();
return 0;
}