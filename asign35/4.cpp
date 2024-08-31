#include<iostream>
using namespace std;
class time {
    int hr;
    int min;
    int sec;
    public:
    time(int y,int x,int z):hr(y),min(x),sec(z)
    {}
    time operator+(time t){
        int temp=t.hr*60*60+t.min*60+t.sec;
        int temp1=hr*60*60+min*60+sec;
        t.sec=(temp+temp1)%60;
        t.min=((temp+temp1)/60)%60;
        t.hr=((temp+temp1)/60)/60;
        return t;
    }
     void showdata(){
        cout<<hr<<" "<<min<<" "<<sec;
    }

};
int main (){
    time o1(3,54,43),o2(4,43,54),o3(0,0,0);
    o3=o1+o2;
    o3.showdata();
}