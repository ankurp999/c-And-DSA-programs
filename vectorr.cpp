#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> adjecentSmall(vector<int> rem){
    vector<int> temp;
    for(int i=1;i<rem.size()-1;i++){
        if(rem[i-1]>rem[i] && rem[i]<rem[i+1])
          temp.push_back(rem[i]);
    }
    return temp;
}
int main(){
    vector <int> a1 ={23,34,5,27,77};
    for (int i=0; i<a1.size();i++)
    cout<<a1[i]<<" ";
    cout<<endl;

    //NEXT question;
    vector<float> a2= {64.7,7.6,68.5,76.5775,57.986};
    for(int i=0;i<a2.size();i++)
    {
        cout<<a2.at(i)<<" ";
    }
    cout<<endl;


    vector <string> a3 ={"etyf","dhfg","trfyu","wjetfh"};
    for(auto :a3)
    cout<<x<<" ";
    cout<<endl;



    vector<int>:: iterator it;
    for(it=a1.begin();it!=a1.end();it++)
    cout<<*it<<" ";
    cout<<endl;
   
vector<int> a4=adjecentSmall(a1);
for (auto x:a4){
    cout<<x<<" ";
}
cout<<endl;


return 0;
}
