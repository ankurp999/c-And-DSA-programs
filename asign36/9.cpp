    #include<iostream>
    using namespace std;
    class coordinate{
        int x;
        int y;
        public:
        //coordinate(int x,int y):x(x),y(y){}
        coordinate operator,(coordinate &c){
            coordinate temp;
            temp.x=c.x;
            temp.y=c.y;
            return temp;
        }
        void showdata(){
            cout<<x<<" "<<y;
        }
        friend ostream& operator<<(ostream &din,coordinate &c);
        friend istream& operator>>(istream &din,coordinate &c);
    };
    ostream& operator<<(ostream &din,coordinate &c){
            din<<c.x;
            din<<endl;
            din<<c.y;
            return din;
        }
     istream& operator>>(istream &din,coordinate &c){
            din>>c.x;
            din>>c.y;
            return din;
        }
    int main(){
     coordinate c1,c2,c3;
     cin>>c1>>c2;
     c3=(c1,c2);
     cout<<c3;
    return 0;
    }