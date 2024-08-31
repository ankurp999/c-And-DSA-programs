#include<iostream>
using namespace std;
class date{
    string day;
    int month;
    int year;
    public:
    date():day("sunday"),month(12),year(2004)
    {}
    void showdata(){
        cout<<day<<" "<<month<<" "<<year;
    }

};
int main(){
    date o1;
    o1.showdata();
}