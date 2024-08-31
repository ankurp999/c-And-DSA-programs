#include<iostream>
using namespace std;
class matrix{
    int data[3][3];
    public:
    matrix operator-(matrix n){
        matrix temp;
        for (int i=0; i<3; i++){
        for (int j=0;j<3;j++){
            temp.data[i][j]=n.data[i][j]-data[i][j];
        }
       }
       return temp;
    }
    matrix operator+(matrix n){
        matrix temp;
        for (int i=0; i<3; i++){
        for (int j=0;j<3;j++){
            temp.data[i][j]=data[i][j]+n.data[i][j];
        }
       }
       return temp;
    }
    int line(int m1[][3],int m2[][3],int i,int j)
    {
        int sum=0;
        for(int k=0;k<3;k++){
            sum=sum + m1[i][k]*m2[k][j];
        }
        return sum;
    }
    matrix operator*( matrix m ){
        matrix temp;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp.data[i][j]=line(data,m.data,i,j);
             }
         }
         return temp;
    }
    void setdata(int y){         
    for (int i=0; i<3; i++){
        for (int j=0;j<3;j++){
            data[i][j]=y++;
        }
    }
    }
    void showdata(){
        for (int i=0; i<3; i++){
        for (int j=0;j<3;j++){
            cout<<data[i][j]<<" ";
        }
        cout<<endl;
    }
    }


};
int main(){
    matrix m1,m2,m3;
    m1.setdata(3);
    m2.setdata(1);
   // m1.showdata();
    m3=m2*m1;
    m3.showdata();
    
}