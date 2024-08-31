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
    time* setarray(int s){
        time *p= new time[s];
        for (int i=0;i<s; i++){
            cin>>p[i].hr>>p[i].min>>p[i].sec;
        }
        return p;

    }
    void shortt(time* p, int s){
        for (int i=0;i<s; i++){
            for(int j=0;j<s-1;j++){
                if((p[j].hr*60*60 + p[j].min*60 + p[j].sec)>(p[j+1].hr*60*60 + p[j+1].min*60 + p[j+1].sec))
               { time temp;
                temp = p[j];
                p[j]= p[j+1];
                p[j+1]= temp;}
            }
        }
    }
    void display( time obj){
        cout<<obj.hr<< " "<<obj.min<<" "<<obj.sec;
    }
};
int main(){
    time t,*p;
    // t.settime();
      t.setdata(45, 45 ,66);
      t.display(t);
    // p=t.setarray(3);
    // p->shortt(p,3);
    // for (int i=0; i<3; i++){
    //      p[i].showdata();
    // }
return 0;
}