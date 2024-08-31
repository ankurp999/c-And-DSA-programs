#include<iostream>
using namespace std;
class shape{
    string shapename;
    public:
    void setshape(){
        cout<<"enter shape name";
        cin>>shapename;
    }
    string getshape(){
        return shapename;
    }
};
int main(){
return 0;
}