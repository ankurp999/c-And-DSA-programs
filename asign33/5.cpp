#include<iostream>
using namespace std;
class matrix {
    int data;
    public:
    void setdata(int r){
        data=r;
    }
    void showdata(){
        cout<<data<< " ";
    }
    int getdata(){
        return data;
    }
    int adddata(int m)
{
       int temp;
        for(int i=0;i<3;i++)
    {
           for(int j=0;j<3;j++)
        {
          temp = m + data;
        }
    } 
    return temp;
}
    int subtract(int m){
        
        return (m-data); 
    }
    int line(matrix m1[][3],matrix m2[][3],int i,int j)
    {
        int sum=0;
        for(int k=0;k<3;k++){
            sum=sum + m1[i][k].data*m2[k][j].data;
        }
        return sum;
    }
    
    void multiply(matrix m1[][3], matrix m2[][3] ){
        matrix temp[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp[i][j].data=line(m1,m2,i,j);
             temp[i][j].showdata();
        
             }
             cout<<endl;
         }
         
    }
    void transpose(matrix m[][3])
    {
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                m[j][i].showdata();
            } 
            cout<<endl;
        }
    }
    void determinant(matrix m[][3]){
        int sum=0;
        for (int i=0;i<3;i++){
           sum= sum + m[0][i].data*((m[1][(i+1)%3].data*m[2][(i+2)%3].data)-(m[1][(i+2)%3].data)*m[2][(i+1)%3].data);
        }
        cout<<sum<<endl;
    }
};
int main(){
  matrix m1[3][3],m2[3][3],m3[3][3];
  int r=1;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        m1[i][j].setdata(r++);
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        m2[i][j].setdata(r++);
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    m3[i][j].setdata(m1[i][j].adddata(m2[i][j].getdata()));
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    m3[i][j].setdata(m1[i][j].subtract(m2[i][j].getdata()));
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        m3[i][j].showdata();
    }
    cout<<endl;
  }
  m1[0][0].multiply(m1,m2);
  m2[0][0].transpose(m1); 
  m2[0][0].determinant(m2);  
}