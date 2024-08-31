#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    protected:
    int getage(){ return age;}
    string getname(){ return name;}
    void setage(int age){ this->age=age;}
    void setname(string name){this->name=name;}
};
class employee:public person
{
    int salary;
    public:
    void setemplyee(string name, int age ,int salary ){
        setage(age);
        setname(name);
        this->salary=salary;
    }
    void showemployee(){
        cout<<"age= "<<getage()<<"name= "<<getname()<<"salary= "<<salary;
    }
};
int main(){
    employee o1;
    o1.setemplyee("ankur",20,100000);
    o1.showemployee();
return 0;
}