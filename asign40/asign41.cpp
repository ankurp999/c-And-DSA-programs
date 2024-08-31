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
    void Sort();
    int greatest();
    int smallest();
    int sum();
    float avarage();
};
float Array::avarage()
{
float avr=sum()*1.0;
    return avr/float(LastIndex+1);
}
int Array::sum(){
    int s=0,i=0;
    while(i<=LastIndex)
    {
         s=s+*(ptr+i++);
    }
    return s;
}
int Array::smallest(){
        int a=*(ptr);
        int i;
    while(i<=LastIndex)
    {
        if(a>*(ptr+i))
        a=*(ptr+i);
        i++;
    }
    return a;
}
int Array::greatest(){
        int a=*(ptr);
        int i;
    while(i<=LastIndex)
    {
        if(a<*(ptr+i))
        a=*(ptr+i);
        i++;
    }
    return a;
}
void Array::Sort()
{
    for(int i=0;i<=LastIndex;i++){
        for(int j=0;j<=LastIndex-1;j++){
            if(*(ptr+i)<*(ptr+j))
            swap(*(ptr+i),*(ptr+j));
        }
    }
}
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
     if(LastIndex<capacity){
    LastIndex++;
    *(ptr+LastIndex)=a;  
    }
    else
    cout<<"not available"; 
}
int main(){
    Array o1(9);
    int lelo;
    for(int i=0;i<7;i++){
        cin>>lelo;
        o1.append(lelo);
    }
    cout<<o1.avarage()<<endl;
    // o1.Sort();
    o1.display();
return 0;
}