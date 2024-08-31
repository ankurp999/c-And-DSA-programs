#include<iostream>
using namespace std;
class complex{
   int real;
   int img;
   public:
//    void setdata(int r,int i){
//          real=r;
//          img=i;
//    }
   complex(){}
  complex(int r,int i){
      real=r;
      img=i;
   }
   void showdata(){
    cout<<real<<"+"<<img<<"i";
    cout<<endl;
   }
};
int main(){
    complex c[5];
    for(int i = 0; i< 5 ;i++){
        int r,ig;
        cin >> r >> ig;
        c[i] = complex(r,ig);
    }
    for(int i = 0 ; i < 5 ; i++){
        c[i].showdata();
    }
    return 0;

}