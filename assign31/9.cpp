//define a function to swap two arrays;
#include<iostream>
using namespace std;
void swaparr(int* &p,int* &q){
    int *r=p;
    p=q;
    q=r;
}
int main(){
   int *p=(int*)malloc(4*sizeof(int));
   int *q=(int*)malloc(4*sizeof(int));
   for(int i=0;i<4;i++){
    cin>>*(p+i);
   }
   for(int i=0;i<4;i++){
    cin>>*(q+i);
   }
   swaparr(p,q);
   for(int i=0;i<4;i++){
    cout<<*(p+i);
   }
   for(int i=0;i<4;i++){
    cout<<*(q+i);
   }
   
   free(p);
   free(q);
}