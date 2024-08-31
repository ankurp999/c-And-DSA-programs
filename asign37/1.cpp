#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    person(int age, string name){
        this->age=age;
        this->name=name;
    }
    void showdata(){
        cout<<age<<" "<<name;
    }
};
int main(){
    person p1(34,"papa tumhare");
    p1.showdata();
return 0;
} 