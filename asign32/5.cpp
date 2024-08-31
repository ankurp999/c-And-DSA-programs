#include<iostream>
using namespace std;
class datewaliclass{
    double radius;
    public:
    void set(double radius){
        this -> radius=radius;
    }
    void diplay(){
        cout<< radius<<endl;
    }
    float returnArea(){
        return 3.14*radius*radius;
    }
    float returncirc(){
        return 2*3.14*radius;
    }

};
int main(){
    datewaliclass o1;
    o1.set(3.6);
    o1.diplay();
    cout<< o1.returnArea()<<endl;
    cout<< o1.returncirc()<<endl;  
}