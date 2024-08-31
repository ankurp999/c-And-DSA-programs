// define a function to calculate the HCF of two numbers 
#include<iostream>
using namespace std;
int HcF(int a,int b)
{
   int i=a<b?a:b;
   for(i;i>0;i--){
    if((a%i==0)&&(b%i==0)){
        return i;
    }
   }
   return 1;
}
int main(){
    int a,b;
    cout<<"enter two num";
    cin>>a>>b;
    cout<<"HCF IS "<<HcF(a,b);
}