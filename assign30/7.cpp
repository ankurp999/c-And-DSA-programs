#include<iostream>
using namespace std;
int add(int,int,int=0);
int main(){
    int a,b,c;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<add(a,b);
    cout<<"enter three numbers "<<endl;
    cin>>a>>b>>c;
    cout<<add(a,b,c);

}
int add(int b,int a,int c){
    return (a+b+c);
}
