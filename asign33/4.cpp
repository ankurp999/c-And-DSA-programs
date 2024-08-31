#include<iostream>
using namespace std;
class testresult {
    int roll_no;
    int right,wrong;
    int net_score;
    
    public:
    static float right_weightage,wrong_weightage;
    void setdata(int r,int rq,int wq){
        roll_no=r;
        right=rq;
        wrong=wq;
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
        cout<<"rolle no= "<<roll_no<<endl;
        cout<<"net score= "<<netscore()<<endl;
    }
    //void swapf()
    void sortresult(testresult c[],int size){
        for( int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++){
                if(c[i].netscore() <c[j].netscore()){
                    testresult temp;
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
            }
        }
        
    }
};
    float testresult :: right_weightage = 2;
    float testresult :: wrong_weightage = 0.33; 
int main(){
    testresult o1[5];
    o1[0].setdata(57,22,7);
    o1[1].setdata(18,21,6);
    o1[2].setdata(21,22,8);
    o1[3].setdata(79,34,2);
    o1[4].setdata(71,5,4);
    int i;
    for( i=0;i<5;i++){
        o1[i].showdata();
    }
    cout<< endl<<endl<<endl;
    o1[0].sortresult(o1,5);
    for( i=0;i<5;i++){
        o1[i].showdata();
    }
}