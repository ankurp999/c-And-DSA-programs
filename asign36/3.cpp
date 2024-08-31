#include<iostream>
using namespace std;
class time{
    int hr,min,sec;
    public:
   // time(int x,int y,int z):hr(x),min(y),sec(z){}
    
    friend ostream& operator<<(ostream&,time&);
    friend istream& operator>>(istream&,time&);
     void operator=(time);

};
void time:: operator=(time c1){

    hr=c1.hr;
    min=c1.min;
    sec=c1.sec;
}

ostream& operator<<(ostream &c1,time &c2){
    
    c1<<c2.hr<<" "<<c2.min<<" "<<c2.sec;
    c1<<endl;
     return c1;
}
istream& operator>>(istream &c1,time &c2){
    
    c1>>c2.hr;
   c1>> c2.min;
    c1>>c2.sec;
     return c1;
}
int main(){
    time t,t2,t3;
    cin>>t;
   // cout<<t<<t2;
    t3=t;
    cout<<t3;
return 0;
}