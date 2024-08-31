#include<iostream>
using namespace std;
class book{
   int booked;
   string title;
   int price;
   public:
   book(){
      booked=0;
   title={"fifty shades of gray"};
   int price=375;
   }
   book(int booked,string title,int price){
    this ->booked=booked;
    this->title=title;
    this->price=price;
   }
};