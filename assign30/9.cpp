#include<iostream>
using namespace std;
float maximum(float a,float b){
    if(a>b)
    return a;
    else
    return b;
}
int maximum(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<maximum(a,b);
    float c,d;
    cout<<"enter two real numbers";
    cin>>c>>d;
    cout<<maximum(c,d);
}