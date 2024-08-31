//define a function to merge two sorted array of same size;
#include<iostream>
#include<vector>
using namespace std;
void merge(int* &p,int* &q,vector<int> &r){
    int k=0;
    for(int i=0;i<8;i++){
        if(i<4)
        r.push_back(p[i]);
        if(i>=4)
        r.push_back(q[k++]);
    }

   
    for(int i=0;i<r.size();i++){
         int min=i;
         for(int j=i+1;j<r.size();j++){
            if(r[min]>r[j])
            min=j;
         }
         swap(r[min],r[i]);
    }
    for(int i=0;i<r.size();i++){
    cout<<r[i]<<" ";}

}
int main(){
   int *p=(int*)malloc(4*sizeof(int));
   int *q=(int*)malloc(4*sizeof(int));
   vector<int> r;
   cout<<"enter two string jii"<<endl;
   for(int i=0;i<4;i++){
    cin>>*(p+i);
   }
   for(int i=0;i<4;i++){
    cin>>*(q+i);
   }
   merge(p,q,r);
//    for(int i=0;i<r.size();i++){
//     cout<<r[i]<<" ";
//    }
}