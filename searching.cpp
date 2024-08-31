#include<iostream>
using namespace std;
bool binrysearch(int (&a)[7],int key,int l,int r){
    int mid=(r+l)/2;
    bool t;
     if(key==a[mid])
     return true;
     else
     {
         if(l>=r)
        return false;
        if(key<a[mid])
        t= binrysearch(a,key,l,mid-1);
        else if(key>a[mid])
        t=binrysearch(a,key,mid+1,r);  
     }
     return t;

}
int main(){
    int arr[]={2,34,35,76,98,99,100};
    cout<<"enter the number you want to search :";
    int n,i;
    cin>>n;
    bool t=binrysearch(arr,n,0,7);
    // for (i= 0; i<7;i++)
    // {
    //     if(n==arr[i])
    //     break;
    // }
    if(!t)
    cout<<"number not found !";
    else
    cout<<" number is found ";
return 0;
}