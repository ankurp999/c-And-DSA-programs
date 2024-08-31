#include<iostream>
#include<fstream>
using namespace std;
void copydata(){
     ofstream fout;
     string str="ankur porwal";
     fout.open("file1.txt",ios::out);
     fout<<str;
     fout.close();
     ifstream fin;
     fin.open("file1.txt",ios::in);
     char ch[30];
     int i=0;
     ch[0]=fin.get();
     while(!fin.eof()){
        ch[++i]=fin.get();
     }
     fin.close();
     fout.open("file2.txt",ios::out);
     fout<<ch;
     fout.close();
     fin.open("file2.txt",ios::in);
     char s;
     s=fin.get();
     while(!fin.eof()){
       cout<<s;
       s=fin.get();
     }
     fin.close();
}
int main(){
  copydata();
  return 0;
}