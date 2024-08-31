    #include<iostream>
    using namespace std;
    class coordinate{
        int x;
        int y;
        public:
        coordinate(int x,int y):x(x),y(y){}
        coordinate operator,(coordinate &c){
            coordinate temp(0,0);
            temp.x=c.x;
            temp.y=c.y;
            return temp;
        }
        void showdata(){
            cout<<x<<" "<<y;
        }
    };
    int main(){
     coordinate c1(4,2),c2(4,1),c3(0,0);
     c3=(c1,c2);
     c3.showdata();
    return 0;
    }