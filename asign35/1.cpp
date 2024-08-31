#include<iostream>
using namespace std;
class complex{
      int real;
      int img;
      public:
      complex(int x, int y):real(x),img(y){}
      complex operator+(complex s){
        complex temp(0,0);
        temp.real=real+s.real;
        temp.img=img +s.img;
        return temp;
      }
      void showdata(){
        cout<<real<<"+"<<img<<"i";
        cout<<endl;
      }
      complex operator*(complex o1){
        complex temp(0,0);
    if((real>0 && o1.real>0)||(real<0 && o1.real<0))
    temp.real=(real*o1.real)-(img*o1.img);
    else
    temp.real=(real*o1.real)-(img*o1.img);
    temp.img=(real*o1.img)+(o1.real*img);
    return temp;
      }
      complex operator-(complex s){
        complex temp(0,0);
        temp.real=real-s.real;
        temp.img=img -s.img;
        return temp;
      }
      bool operator==(complex s){
        if(real==s.real && img==s.img)
        return 1;
        return 0;
      }

};
int main(){
    complex o1(3,4),o2(3,4),o3(0,0),o4(0,0),o5(0,0);
     o3=o1+o2;
     o3.showdata();
    o4=o2-o1;
    o4.showdata();
    o5=o2*o1;
    o5.showdata();
    cout<<(o2==o1);
}