#include<iostream>
using namespace std;
class customer{
   int cust_id;
   string name;
   string email;
   long double mob;
   public:
   customer(){
    cust_id=654;
    name={"ankur"};
    email={"ankurporwal999@gmail.com"};
    mob=378655;
   }
   customer(int i,string name,string email,long double mob){
    cust_id=i;
    this ->name=name;
    this ->email=email;
    this->mob=mob;
   }
   void showdata(){
    cout<<cust_id<<" "<<name<<" "<<email<<" "<<mob<<endl;
   }
};
int main(){
    customer o1,o2(53,"ankurr","sdtgfwyt",4523547);
    o1.showdata();
    o2.showdata();

}