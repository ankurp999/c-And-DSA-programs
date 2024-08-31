#include<iostream>
using namespace std;
class array{
    int *p;
    int size;
    public:
    array(int s):size(s){
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
    friend array operator+(array ,array);

};
array operator+(array a, array b){
    array tempo(8);
    int l=0;
    for(int i=0;i<tempo.size;i++){
      if(i<a.size){
         tempo.p[i]=a.p[i];
         }
         else{
         tempo.p[i]=b.p[l];
         l++;}
         
    }
    return tempo;
}
int main(){
    array a1(4),a(4),a2(8);
    a1.setdata();
    a.setdata();
    a2=a+a1;
    a2.showdata();
return 0;
}