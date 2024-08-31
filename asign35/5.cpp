#include<iostream>
using namespace std;
class numbers{
   int x,y,z;
   public:
   numbers():x(3),y(6),z(8){}
   void showdata(){
        cout<<x<<" "<<y<<" "<<z;
    }
    void operator-(){
        x=-x;
        y=-y;
        z=-z;
    }
};
int main(){
    numbers o1,o2;
    -o1;
    o1.showdata();
}