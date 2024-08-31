//define a function to calculate LCM of three numbers ;
#include<iostream>
using namespace std;
int LCM(int a,int b,int c){
    
    for(int i=1;i<=a*b*c;i++){
        if((i%a==0)&&(i%b==0)&&(i%c==0))
        return i;
    }
}
int main(){
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    cout<<LCM(a,b,c);
     return 0;
}