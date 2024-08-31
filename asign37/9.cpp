#include<iostream>
#include<string.h>
using namespace std;
class stringg{
    char *ptr;
    int size;
    public:
    stringg (char *input){
        size=strlen(input);
        ptr=new char[size+1];
        strcpy(ptr,input);
    }
    void uppercas(){
        strupr(ptr);
    }
    void lowercas(){
        strlwr(ptr);
    }
    void showtime(){
      cout<<ptr<<" "<<size;
    }
};
int main(){
    char *p=(char*)malloc(50);
    cin.getline(p,50);
   stringg obj(p);
   obj.uppercas();
   obj.lowercas();
   obj.showtime();

return 0;
}