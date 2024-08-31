#include<iostream>
#include<cmath>
using namespace std;
class coordinate{
    int x,y;
    public:
     void getcoordinate(){
        cout<<"enter coordinates baby ";
        cin>>x>>y;
    }
    float distance(){
        float temp;
        temp=(x*x+y*y);
        temp = sqrt(temp);
        return temp;
    }
    float distance(coordinate o){
        float temp;
        temp=(o.x-x)*(o.x-x)+(o.y-y)*(o.y-y);
        return sqrt(temp);
    }  
};
class shape{
    string shapename;

    public:
    void setshape(){
        cout<<"enter shape name";
        cin>>shapename;
    }
    string getshape(){
        return shapename;
    }
};
class straightline : public shape
{
    coordinate o1,o2;
    public:
    void setstraightline(){
        o1.getcoordinate();
        o2.getcoordinate();
    }
    coordinate getstraightline1(){
        return o1;

    }
    coordinate getstraightline2(){
        return o2;
        
    }
    void showline(){
        cout<<getshape();
    }
    float getdistance(){
        return o1.distance(o2);
    }
    void showdistance(){
        cout<<getdistance();
    }

};
int main(){
    straightline s1;
    s1.setshape();
    s1.setstraightline();
    s1.showdistance();
    s1.showline();
    
return 0;
}