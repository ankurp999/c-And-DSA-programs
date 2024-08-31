#include<iostream>
using namespace std;
class Integer{
    int i;
    public:
    Integer():i(6){}
    friend bool operator!(Integer);
    friend bool operator==(Integer,Integer);

    void showData(){
        cout << i;
    }
};
    bool operator!(Integer I){
        if(I.i == 0)
        return true;
        return false;
    }
    bool operator==(Integer I,Integer I1){
        if(I.i == I1.i)
        return true;
        return false;
    }


int main(){
    Integer I, I1;
    bool i = !I;
    if(I==I1)
    cout << "Barabar";
    else cout << "nhi barabar";
return 0;
}