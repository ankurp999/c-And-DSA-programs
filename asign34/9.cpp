#include<iostream>
using namespace std;
class hms{
    int room_no;
    string roomtype;
    bool isac;
    double price;
    public:
    hms():room_no(108),roomtype("double"),isac(true),price(1563.5)
    {}
    void showdata(){
        cout<<room_no<<" "<<roomtype<<" "<<isac<<" "<<price;
    }

};
int main(){
    hms o1;
    o1.showdata();
}