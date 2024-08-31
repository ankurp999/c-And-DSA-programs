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
        cout<<a<<"+"<<b<<"i";
    }
};
int main(){
    complex c1;
    c1.setdata(3,5);
    c1.showdata();
return 0;       
}