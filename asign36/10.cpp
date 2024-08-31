#include<iostream>
using namespace std;
class student{
    string name;
    int rolle_no;
    int age;
    public:
    void setdata(){
        cin>>name>>rolle_no>>age;
    }
    void showdata(){
        cout<<name<<endl;
        cout<<rolle_no<<endl;
        cout<<age;
    }
    friend bool operator==(student&,student&);
};
bool operator==(student &s1,student &s2){
    if(s1.name==s2.name && s1.rolle_no==s2.rolle_no && s1.age==s2.age)
    return 1;
    return 0;
}
int main(){
    student s1,s2;
    s1.setdata();
    s2.setdata();
    int t=s1==s2;
    cout<<t;
return 0;
}