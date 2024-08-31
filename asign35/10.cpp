#include<iostream>
using namespace std;
class array{
int *p;
int size;
int data;
int x=0;
public:
array(int size){
    p= new int[size];
}
void setdata(int data){
    p[x++]=data;
}
int operator[](int i){
    return p[i];
}

};
int main(){
    array a(5);
    cout<<"enter element\n";
    for (int i=0;i<5;i++){
        int data;
        cin>> data;
        a.setdata(data);
    }
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}