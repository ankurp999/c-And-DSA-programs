#include<iostream>
using namespace std;
class time{
    int hr,min,sec;
    public:
   // time(int x,int y,int z):hr(x),min(y),sec(z){}
    
    friend ostream& operator<<(ostream&,time&);
    friend istream& operator>>(istream&,time&);
};
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
    time t,t2;
    cin>>t>>t2;
    cout<<t<<t2;
return 0;
}