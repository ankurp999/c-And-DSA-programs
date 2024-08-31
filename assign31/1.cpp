#include<iostream>
using namespace std;
void sort(int *p,bool t=1){
    if(t){
    for(int i=0;i<7;i++){
        for(int j=0;j<7-i;j++){
            if(*(p+j)>*(p+j+1)){
                swap(p[j],p[j+1]);
            }
        }
    }}
    else{
    for(int i=0;i<7-1;i++){
        for(int j=0;j<6-i;j++){
            if(*(p+j)<*(p+j+1)){
                swap(p[j],p[j+1]);
            }
        }
    }}
}

int main(){
    int arr[]={2,4,1,6,3,7,0};
    bool t;
    cout<<"batao bhaii 1 ya 0 ";
    cin>>t;
    sort(arr,t);
    for(int i=0;i<7;i++){
        cout<<" "<<arr[i];
    }
}
