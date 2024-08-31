#include<iostream>
using namespace std;
class array{
    int *p;
    public:
    static int size;

    array(){
        p=(int*)malloc(size*sizeof(int));
    }
    void setdata(){
        for (int i=0;i<size;i++){
            cin>>*(p+i);
        }
    }
    void operator=(array a1){
          for(int i=0;i<size;i++){
              p[i]= a1.p[i];
          }
    
    }
    void showdata(){
        for (int i=0;i<size;i++){
            cout<<*(p+i)<<" ";
        }
    }

};
int array::size;

int main(){
    array a1,a;
   array:: size=4;
    a1.setdata();
    a=a1;
    a.showdata();
return 0;
}