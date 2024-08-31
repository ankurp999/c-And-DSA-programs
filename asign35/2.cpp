#include<iostream>
using namespace std;
class time {
    int hr;
    int min;
    int sec;
    public:
    time(int y,int x,int z):hr(y),min(x),sec(z)
    {}
    bool operator>(time t){
        int temp=t.hr*60*60+t.min*60+t.sec;
        int temp1=hr*60*60+min*60+sec;
        if(temp<temp1)
        return 1;
        return 0;
    }

};
int main (){
    time o1(3,54,43),o2(4,43,54);
    cout<<(o2>o1);

}