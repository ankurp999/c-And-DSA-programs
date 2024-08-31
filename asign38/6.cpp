#include<iostream>
using namespace std;
class game{
    int arr[5];
    public:
    void setscore(int round, int score){
       arr[round-1]=score;
       if(round>6)
       cout<<" invalid round ";
    }
    int getscore(int round){
        if(round > 6)
        return arr[round-1];
        else
        cout<<" invalid round ";
    }

};
int main(){
    game o1;
    o1.setscore(1,45);
return 0;
}