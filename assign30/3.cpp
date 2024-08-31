#include<iostream>
using namespace std;
void power(int a,int b){
    int tem=1;
    if(a!=0&&b!=0){
    for(int i=1;i<=b;i++){
        tem=tem*a;
    }
    cout<<tem;}
    else
    cout<<"undefined";
}
int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    power(a,b);

}