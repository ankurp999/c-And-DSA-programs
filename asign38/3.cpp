#include<iostream>
#include<cmath>
using namespace std;
class coordinate{
    int x,y;
    public:
    coordinate(){
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
int main(){
    coordinate o1,o2;
    cout<<o1.distance();
    cout<<endl;
    cout<<o1.distance(o2);
return 0;
}