#include<iostream>
using namespace std;
class time{
    int hr,min,sec;
    public:
    void setdata(int hr,int min, int sec){
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }
    void showdata(){
        cout<<hr<<" "<<min<<" "<<sec<<endl;
    }
    void settime(){
        time t;
        t.setdata(34,56,32);
        t.showdata();
    }
    int gethr(){
        return hr;
    }
    int  getmin(){
        return min;
    }
    int getsec(){
        return sec;
    }
};
int main(){
    time t;
    t.settime();
return 0;
}