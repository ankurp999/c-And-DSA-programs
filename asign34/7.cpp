#include<iostream>
using namespace std;
class student{
    int roll_no;
    string name;
    public:
    student():roll_no(354),name("ankur")
    {}
    void showdata(){
        cout<<roll_no<<" "<<name;
    }
};
int main(){
    student o1;
    o1.showdata();
}