#include<iostream>
using namespace std;
class testresult {
    int roll_no;
    int right,wrong;
    int net_score;
    float right_weightage,wrong_weightage;
    public:
    void setdata(int r,int rq,int wq, int rw,float ww){
        roll_no=r;
        right=rq;
        wrong=wq;
        right_weightage=rw;
        wrong_weightage=ww;
    }
    float netscore(){
        return (right*right_weightage-wrong*wrong_weightage);
    }
    int rollno(){
        return roll_no;
    }
    int right_no(){
        return right;
    }
    int wrong_no(){
        return wrong;
    }
    void showdata(){
        cout<<"rolle no-"<<roll_no<<endl;
        cout<<"net score-"<<netscore();
    }
};
int main(){
    testresult o1;
    o1.setdata(18,21,6,2,0.33);
    o1.showdata();
}