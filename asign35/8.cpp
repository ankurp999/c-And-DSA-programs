#include<iostream>
using namespace std;
class fraction {
       long num;
       long dem;
       public:
       fraction(long n,long d):num(n),dem(d)
       {}
       bool operator<(fraction n){
             fraction temp(1,1),temp2(1,1);
             temp.num= num*n.dem;
             temp.dem=dem*n.dem;
             temp2.num= n.num*dem;
             temp2.dem=n.dem*dem;
             if(temp2.num>temp.num)
             return 1;
             return 0;
       }
       void showdata(){
        cout<<num<<"/"<<dem;
       }
};
int main(){
    fraction f1(3,5),f2(1,2);
    cout<<(f2<f1);
    
}