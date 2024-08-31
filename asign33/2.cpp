// define a class time like 3 hrs 45 min 20 sec declare appropriate
//number of instance member variable and also define instance member function to set value 
// for tiem amd display value of time 
#include<iostream>
using namespace std;
class timewaliclass{
    int hr,min,sec;
    public:
    void set(int hr2,int min2,int sec2){
        hr=hr2;
        min=min2;
        sec=sec2;
    }
    void showtime(){
        cout<<hr<<" hrs "<<min<<" min "<<sec<<" sec "<<endl;
    }
    timewaliclass normalize(){
        timewaliclass temp;
    if(sec>=60){
    temp.sec=sec % 60;
    sec=sec/60;
    }
    min = min + sec;
    if(min>=60){
    temp.min = min%60;
    min=min/60;
    }
    hr += min;
    temp.hr=hr;
    return temp;
    }
    timewaliclass adddata(timewaliclass c1, timewaliclass c2)
    {
        c1.hr=c1.hr+c2.hr;
        c1.min=c1.min+c2.min;
        c1.sec=c1.sec+c2.sec;
        c1=c1.normalize();
        return c1;
    }
    bool greatertime(timewaliclass c1, timewaliclass c2){
        if(c1.hr>c2.hr)
        return 0;
        else if(c1.hr<c2.hr)
        return 1;
        
        if(c1.hr==c2.hr) 
        {
          if(c1.min>c2.min) 
          {
            return 0;
          }
          if(c1.min<c2.min)
          return 1;

        }
        if(c1.min==c2.min)
        {
            if(c1.sec>c2.sec)
            return 0;
            if(c1.sec<c2.sec)
            return 1;
        }
    }
};

int main(){
    timewaliclass o1,o2,o3;
    o1.set(50,89,67);
    o1=o1.normalize();
    o1.showtime();
    o2.set(56,657,67);
    o3=o3.adddata(o1,o2);
    o3.showtime();
    int r=o1.greatertime(o1,o2);
    cout<<"--"<<r<<"--"<<endl; 
}