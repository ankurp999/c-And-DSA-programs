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
    void print(){
        cout<<hr<<" hrs "<<min<<" min "<<sec<<" sec ";
    }
};
int main(){
    timewaliclass o1;
    o1.set(4,45,20);
    o1.print();
}