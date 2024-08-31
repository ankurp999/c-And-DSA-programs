#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int x,int y){a=x;b=y;}
    void showdata(){cout<<a<<"+"<<"("<<b<<")"<<"i"<<endl;}
    complex add(complex);
    complex subtract(complex,complex);
    complex multiply(complex,complex);
};
complex complex:: add(complex o1){
       complex temp;
       temp.a=o1.a+a;
       temp.b=o1.b+b;
       return temp;
}
complex complex:: subtract(complex o1,complex o2){
    complex temp;
    temp.a=o1.a-o2.a;
    temp.b=o1.b-o2.b;
    return temp;
}
complex complex::multiply(complex o1,complex o2){
    complex temp;
    if((o1.a>0 && o2.a>0)||(o1.a<0 && o2.a<0))
    temp.a=(o1.a*o2.a)-(o1.b*o2.b);
    else
    temp.a=(o1.a*o2.a)-(o1.b*o2.b);
    temp.b=(o1.a*o2.b)+(o2.a*o1.b);
    return temp;
}
int main(){
    complex o1,o2,o3;
    o1.setdata(-2,3);
    o2.setdata(-3,5);
    o3 = o2.add(o1);
    o3.showdata();
    o3 = o3.subtract(o1,o2);
    o3.showdata();
    o3 = o3.multiply(o1,o2);
    o3.showdata();

}