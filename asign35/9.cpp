#include<iostream>
using namespace std;
class distance1{
       int km;
       int m;
       int cm;
       public:
    
       distance1(int k,int m,int cm)
       {
        km = k;
        this -> m = m;
        this->cm =cm;
       }
       distance1 operator+(distance1 d){
        distance1 temp(0,0,0),temp2(0,0,0);
        temp.km=km+d.km;
        temp.m=m+d.m;
        temp.cm=cm+d.cm;
        if(temp.cm>=100)
        {
            temp.m=temp.cm/100 + temp.m;
           temp2.cm=temp.cm%100;
        }
        if(temp.m>=1000){
            temp2.m=temp.m%1000;
            temp2.km=temp.km+temp.m/1000;
        }
        return temp2;
       }
       void showdata(){
        cout<<km<<" km "<<m<<" m "<<cm<<" cm ";
       }
};
int main(){
    distance1 f1(34,654,56),f2(34,546,54),f3(0,0,0);
    f3=f1+f2;
    f3.showdata();
    
}