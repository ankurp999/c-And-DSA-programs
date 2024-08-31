#include<iostream>
using namespace std;
int combination(int ,int);
int fact(int);
int main(){
    int n,m;
    cout<<"enter lines "<<endl;
    cin>>n;
    void pascal(int );
    pascal(n);
    return 0;
    }
void pascal(int n){
    int i;
    for(i=0;i<n;i++){
        for(int j=0;j<n-i;j++)
        cout<<" ";
        for(int j=0;j<=i;j++){
           
            cout<<" "<<combination(i,j);
            
        }
        cout<<endl;
    }
}
int fact(int a){
    if(a==1 || a == 0)
    return 1;
    return (a*fact(a-1));
}
int combination(int i,int j){
    int m = i - j;
    return fact(i)/(fact(m)*fact(j));
    }