#include<iostream>
using namespace std;
class circle{
    float radius;
    float area;
    public:
    circle(){
        radius=6.2;
    }
    circle(float x){
        radius=x;
    }
    void areaa(){
        area=3.14*radius*radius;
    }
    void showdata(){
        cout<<area;
    }

};
int main(){
    circle o1;
    o1.areaa();
    o1.showdata();


}