#include<iostream>
using namespace std;
class actor{
    string name;
    int age;
    public:
    void setName(string str){
        name=str;
    }
    void setAge(int age){
        this->age=age;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};
class TVactor:public actor
{
    int TVprojectsdone;
    int runningprojects;
    public:
    void setTVactor(int a,int b, string name,int age){
        TVprojectsdone=a;
        runningprojects=b;
        setName(name);
        setAge(age);
    }
    void showTVactor(){
        cout<<"name is= "<<getName()<<",age= "<<getAge()<<endl;
        cout<<" no of projects done= "<<TVprojectsdone;
        cout<<" running projects = "<<runningprojects;  
        }

};
class movieactor:public actor{
    int moviedone;
    int movierunning;
    public:
    void setmovieactor (int a,int b,string name,int age){
        moviedone=a;
        movierunning=b;
        setName(name);
        setAge(age);
    }
};
class allscreenActor:public TVactor,public movieactor
{
     public:
     void setActordata(){
       setTVactor(32,2,"jhantuji",43);
       setmovieactor(43,3,"landuji",23);
     }
     void showactordata(){
        showTVactor();
     }
};

int main(){
allscreenActor atr;
atr.setActordata();
atr.showactordata();
return 0;
}