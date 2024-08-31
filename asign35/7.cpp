#include<iostream>
using namespace std;
class fraction {
       long num;
       long dem;
       public:
       fraction(long n,long d):num(n),dem(d)
       {}
       fraction operator+(fraction n){
             fraction temp(1,1);
             temp.num= num*n.dem+n.num*dem;
             temp.dem=dem*n.dem;
             return temp;
       }
       void showdata(){
        cout<<num<<"/"<<dem;
       }
};
int main(){
    fraction f1(3,5),f2(1,2),f3(1,1);
    f3=f1+f2;
    f3.showdata();
}