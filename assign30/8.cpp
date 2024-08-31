#include<iostream>
using namespace std;
float area(float a,float b){
    return (0.5*a*b);
}
int area(int a,int b)
{
    return a*b;
}
float area(int r){
    return (3.14*r*r);
}
int main(){
    int r;
    cout<<"enter r of the crcl";
    cin>>r;
    cout<<area(r);
    int a,b;
    cout<<"enter a, b";
    cin>>a>>b;
    cout<<area(a,b);
    float c,h;
    cout<<"enter h and c";
    cin>>c>>h;
    cout<<area(c,h);
    return 0;

}