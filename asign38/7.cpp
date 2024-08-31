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
class gameResult : public game
{
   int ppl[5];
   public:
   void setppl(int round, int result){
     ppl[round-1]=result;
   }
   int getppl(int round){
       return ppl[round-1];
   }
   int getfinalresult(){
    int sum=0;
    for (int i=0;i<5;i++){
        sum=sum+ppl[i];
    }
    return sum;
   }
};
int main(){
    game o1;
    o1.setscore(1,45);
return 0;
}