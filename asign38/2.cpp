#include<iostream>
using namespace std;
class circle{
    int radius;
    public:
    void setradius(int radius){this->radius=radius;}
    int getradius(){ return radius;}
    float getarea(){
        return (radius*3.14*3.14);
    }
    void showarea(){
        cout<<getarea();
    }
};
class thickCircle:public circle
{
   int thickness;
   public:
   void setthickness(){
    cout<<" enter the thickness of the circle";
    cin>>thickness;
   }
   int getthickness(){
    return thickness;
   }
   float getarea(){
    cout<<getradius()<<"--";
       return (((getradius()+thickness)*3.14*3.14) - (circle::getarea()));
   }
   void showarea(){
    cout<<getarea();
   }
};
int main(){
    thickCircle o1;
    o1.setradius(34);
    o1.setthickness();
    o1.showarea();
    // circle o1;
    // o1.setradius(3);
    // o1.showarea();
return 0;
}