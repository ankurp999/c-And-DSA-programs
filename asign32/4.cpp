#include<iostream>
using namespace std;
class datewaliclass{
    int day,month,year;
    public:
    void set(int day1,int month1,int year1){
        day=day1;
        month=month1;
        year=year1;

    }
    void diplay(){
        cout<<"d= "<<day<<" m= "<<month<<" y= "<<year<<endl;

    }
    void diplay1(){
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
    void display2(){
        cout<<day<<"-"<<"may"<<"-"<<year<<endl;
    }
};
int main(){
    datewaliclass o1;
    o1.set(3,5,2023);
    o1.diplay();
    o1.diplay1();
    o1.display2();
}