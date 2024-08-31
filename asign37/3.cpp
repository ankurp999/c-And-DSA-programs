#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int a,int b){
        this->a=a;
        this->b=b;
    }
    void showdata(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
void inst(){
    complex *ptr;
    ptr= new complex;
    ptr->setdata(4,7);
    ptr->showdata();
}
int main(){
    complex c1;
    c1.setdata(3,5);
    c1.showdata(); 
     inst();
return 0;
}