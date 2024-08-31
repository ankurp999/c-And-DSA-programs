#include<iostream>
using namespace std;
void prime(int a){
    int i;
    for(i=2;i<a;i++){
        if(a%i==0)
        break;
    }
    if(i==a)
    cout<<"prime";
    else
    cout<<"not prime";
}
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    prime(a);
    return 0;
}