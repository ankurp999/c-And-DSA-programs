#include<iostream>
#include<vector>
using namespace std;
bool checkprime(int a){
    for(int i= 2;i<a;i++)
    {
        if(a%i==0)
        return false;
    }
    return true ;
}
int main(){
    vector <vector <int> > A={{5,4,7,2,9},{84,6,4,3,2},{0,7,4,25,3}};
    vector <int> ne;
    ne.insert(ne.begin(),A[0].begin(),A[0].begin()+3);
    ne.insert(ne.end(),A[1].begin(),A[1].begin()+2);
    ne.insert(ne.end(),A[2].begin(),A[2].end());

    for(auto x:ne)
    cout<<x<<" ";

    // vector <int> a1={23,4,3,2,7,68,56,11};
    // vector<int> :: iterator it;
    // for(it= a1.begin();it!=a1.end();it++){
    //     bool ck = checkprime(*it);
    //     if(ck){
    //     a1.erase(it);
    //     it--;
    //     }
    // }
    // for(auto x:a1)
    // cout<<x<<" ";
    // cout<<endl;

    
}