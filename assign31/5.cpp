//define a function to print all the prime factors of a given numbers ;
#include<iostream>
#include<vector>
using namespace std;
int checkprime(int i){
    for(int j=2;j<i;j++){
        if((i%j)==0)
        return 0;
    }
    return 1;
}
void primefactors(int n)
{
    vector<int> arr;
    int l=0;
    for(int i=2;i<=n;i++){
        if(n%i==0 && checkprime(i))
        arr.push_back(i);
    }
    for(int i=0;i<arr.size();i++){
        cout<<" "<<arr[i];
    }
}
int main()
{
   int n;
   cout<<"enter  a numbers ";
   cin>>n;
   primefactors(n);
}