#include<iostream>
using namespace std;
class time {
    int hr;
    int min;
    int sec;
    public:
    time(int y,int x,int z):hr(y),min(x),sec(z)
    {}
    time(){}
    void operator++(){
        ++sec;
    }
    time operator++(int){// for post operator
        time temp(hr,min,sec);
        sec++;
        return temp;
    }
    void showdata(){
        cout<<hr<<" "<<min<<" "<<sec;
    }

};
int main (){
    time o1(3,54,43),o2(4,43,54);
    o2=o1++;
    o2=o1;
    o2.showdata();
     return 0;
}