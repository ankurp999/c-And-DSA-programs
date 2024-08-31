#include<iostream>
#include<string.h>
using namespace std;
void sortstr(char str[][10]){
    cout<<endl<<endl;
    //cout<<str[0];
    for(int j=0;j<4;j++){
    for(int i=1;i<5;i++){
       if(strcmp(str[i],str[j])>0)
       {
         char temp[10];
         strcpy(temp,str[j]);
         strcpy(str[j],str[i]);
         strcpy(str[i],temp);
       }
    }}
    for(int i=0;i<5;i++){
        cout<<str[i]<<endl;
    }
}
void inputstr(char (&str)[10]){
    //cin.ignore();
    cin.getline(str,10);
    //cout<<"---"<<str<<"---";
}
int main(){
    char str[5][10];
    for(int i=0;i<5;i++){
        inputstr(str[i]);
    }
    sortstr(str);
    return 0;
    
}