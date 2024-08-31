// define a function to print all the substrings from start indenx
// inclusive define function such a way that if secsnd arg is not provided
//string will print till the last posible index;
#include<iostream>
#include<string.h>
using namespace std;
void substring(char *p,int start,int end){
    for(int i=start;i<end;i++){
        cout<<*(p+i);
    }
}
int main(){
    char *p=(char*)malloc(10);
    cout<<"enter a string";
    cin.getline(p,10);
    int start,end;
    cout<<"enter start and end index";
    cin>>start>>end;
    substring(p,start,end);
    free(p);
    return 0;
}