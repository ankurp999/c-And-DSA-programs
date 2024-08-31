#include<iostream>
using namespace std;
class complex{
      int real;
      int img;
      public:
      complex(int x,int y):real(x),img(y){}
      friend complex operator+(complex&,complex&);
      friend complex operator-(complex&,complex&);
      friend complex operator*(complex&,complex&);
      friend complex operator-(complex);
      void showdata(){
        cout<<real<<"+"<<img<<"i";
      }

};
complex operator-(complex c){
    c.img=-c.img;
    c.real=-c.real;
    return c;
}
complex operator+(complex &c1,complex &c2){
    complex temp(0,0);
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
complex operator-(complex &c1,complex &c2){
    complex temp(0,0);
    temp.real=c1.real-c2.real;
    temp.img=c1.img-c2.img;
    return temp;
}
complex operator*(complex &o1,complex &o2){
    complex temp(0,0);
    if((o1.real>0 && o2.real>0)||(o1.real<0 && o2.real<0))
    temp.real=(o1.real*o2.real)-(o1.img*o2.img);
    else
    temp.real=(o1.real*o2.real)-(o1.img*o2.img);
    temp.img=(o1.real*o2.img)+(o2.real*o1.img);
    return temp;
}
int main(){
    complex c1(2,6),c2(5,6),c3(0,0),c4(0,0);
    // (c3=c2+c1).showdata();
    // cout<<endl;
    // (c4=c2*c1).showdata();
    c4=-c1;
    c4.showdata();
return 0;
}