#include<iostream>
using namespace std;
int main(){
    cout<<"hello"<<endl;
    cout<<"mysirG"<<endl;
    // int a,b;
    // cout<<"enter two numbers"<<endl;
    // cin>>a>>b;
    // cout<<"the sum is "<<a+b<<endl;
    // int r;
    // cout<<"enter the radius of the cirle"<<endl;
    // cin>>r;
    // cout<<"the area of the circle is "<<3.14*r*r;
     //int a,b,c;
    // cout<<"enter lenghth ,breath and hight"<<endl;
    // cin>>a>>b>>c;
    // cout<<"the volume of cuboid is "<<a*b*c;
    // cout<<"enter three numbers"<<endl;
    // cin>>a>>b>>c;
    // cout<<"the avarage of the numbers "<<(a+b+c)/3.0;
    // int a;
    // cout<<"enter a number"<<endl;
    // cin>>a;
    // cout<<"the square is "<<a*a;
    // int a,b;
    // cout<<"enter two numbers "<<endl;
    // cin>>a>>b;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // cout<<a<<" "<<b;
    // int a,b;
    // cout<<"enter two numbers "<<endl;
    // cin>>a>>b;
    // if(a>b)
    // cout<<a<<" is greater than "<<b;
    // else
    // cout<<b<<" is greater than "<<a;
    int arr[10];
    int sum=0;
    cout<<"enter 10 numbers"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
    
    return 0;
}