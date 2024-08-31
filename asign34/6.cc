#include<iostream>
using namespace std;
class numbers{
    int size;
    int *arr;
    public:
    numbers(int size){
      this-> size=size;
      arr=(int*)malloc(size*sizeof(int));
    }
    numbers(numbers &o){
        size=o.size;
        arr=(int*)malloc(size*sizeof(int));
        for(int i=0; i<size;i++){
            *(arr+i)=*(o.arr+i);
        }
    }
    void setdata(int size){
        for(int i=0;i<size;i++){
            cin>>*(arr+i);
        }
    }
    void showdata(){
        for(int i=0;i<size;i++){
            cout<<arr[i];
        }
    }
    ~numbers(){
        free(arr);
        //cout<<"gdf";
    }

};
int main(){
    numbers o1(4);
    o1.setdata(4);
    numbers o2(o1);
    o2.showdata();
}