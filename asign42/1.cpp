#include<iostream>
using namespace std;
class DynArray
{
    int capacity;
    int LastIndex;
    int *ptr;
    public:
    DynArray(){
        cout<<"enter size";
        int size;
        cin>>size;
        capacity=size;
        ptr=new int[size];
        LastIndex=-1;
    }
    bool isFull(){
        if(LastIndex==capacity-1)
        return 1;
        return 0;
    }
    int count(){
        return LastIndex+1;
    }
    int get(int a){
        return *(ptr+a);
    }
    ~DynArray(){
        delete ptr;
    }
    int findTheElement(int a){
    int i=0;
    while(i<=LastIndex){
        if(a==*(ptr+i++))
        return i;
    }
    return -1;
}
void deepcpy( DynArray c1){
   
}
    void Delete(int a)
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
    void edit(int a,int b){
        if(a<=LastIndex)
        {
            *(ptr+a)=b;
        }
        else
        cout<<endl<<" --edit not performed !!--"<<endl;
    }
    void DoubleArray(){
        int *temp=new int[2*capacity];
        for(int i=0;i<=LastIndex;i++){
            *(temp+i)=*(ptr+i);
        }
        delete ptr;
        capacity=2*capacity;
        ptr=temp;
    }
    void HalfArray(){
        int *temp=new int[capacity/2];
        capacity/=2;
        for(int i=0;ptr[i]&&i<capacity;i++){
            *(temp+i)=*(ptr+i);
         LastIndex=i;
        }
        delete ptr;
        ptr=temp;
    }
    int CurrCapacity(){
        return capacity;
    }
    bool isEmpty()
    {
        if(LastIndex==-1)
        return 1;
        return 0;
    }
    void append(int a){
        if(LastIndex<capacity)
        {
            LastIndex++;
            *(ptr+LastIndex)=a;
        }
        else
        cout<<"value not storred";
    }
    void insert(int a,int b){
        if(a<capacity && a<=LastIndex && a>=0){
          int temp=LastIndex;
            while(temp>=a)
            {
            *(ptr+temp+1)=*(ptr+temp);
            temp--;
            }
            *(ptr+a)=b;
            LastIndex++;
        }
    }
    void showdata(){
        for (int i=0;i<=LastIndex;i++){
            cout<<*(ptr+i)<<" ";
        }
    }
};
int main(){
    DynArray o1(5);
    o1.append(1);
    o1.append(3);
    o1.append(4);
    o1.insert(1,2);
    o1.DoubleArray();
    o1.HalfArray();
    o1.Delete(1);
    o1.showdata();
return 0;
}