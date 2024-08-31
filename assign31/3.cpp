//define a function to rotate a array by n position in the direction.
// inplement position and direction using default argument. 
// argument d can be -1 and 1 denoting left or right direction .
//argument n should be the last arg with value 1.
#include<iostream>
#include<string.h>
using namespace std;
void rotate(int *p,int s,int n,int d){
    if(d<0){
        int rendom[s];
        while(n)
        {
          for(int i=0;i<s;i++)
           rendom[i]=*(p+i);
        
          for(int i=0;i<s;i++) 
          *(p+i)=rendom[i+1];
         *(p+s-1)=rendom[0];
         n--;
        }
}
else
{
   int rendom[s];
    while(n){
        for(int i=0;i<s;i++){
          rendom[i]=*(p+i);
        }
    for(int i=s;i>0;i--){
    *(p+i)=rendom[i-1];
    }
    *(p)=rendom[s-1];
    n--;} 
}
for(int i=0;i<s;i++){
    cout<<" "<<*(p+i);
}
}
int main(){
    int s;
    cout<<"enter the size of the array: ";
    cin>> s;
    int *p=(int*)malloc(s*sizeof(int));
    for(int i=0;i<s;i++){
        cin>>*(p+i);
    }
    int n;
    cout<<"how many position you want to rotate";
    cin>> n;
    int d;
    cout<<"direction pleaseb !!"<<endl<<"-1 for left and 1 for right";
    cin>>d;
    rotate(p,s,n,d);
    free(p);
}