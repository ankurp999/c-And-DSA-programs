#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    void setvalue(int r,int imagin){
        real=r;
        img=imagin;
    }
    void print(){
        cout<<real<<"+"<<"i"<<img;
    }
};
int main(){
   complex o1;
   o1.setvalue(4,5);
   o1.print();
}