#include<iostream>
#include<array>
using namespace std;
class complex {
   int real, img;
   public:
      complex() {
         //default constructor to initialize complex number to 0+0i
         real = 0; img = 0;
      }
      complex(int r, int i) {
         //parameterized constructor to initialize complex number.
         real = r; img = i;
      }
      void set();
      void get();
      void display();
      void add(complex&);
      friend complex sub(complex, complex);
      complex& operator=(complex& sum){
       real= sum.real;
       img = sum.img;
        return (*this);
      }
};
void complex::set() {
   cout << "Enter Real part: ";
   cin >> real;
   cout << "Enter Imaginary Part: ";
   cin >> img;
}
void complex::get() {
   cout << "The complex number is: "<< real << "+" << img << "i" << endl;
}
void complex::display() {
   if(img < 0)
      if(img == -1)
         cout << "The complex number is: "<< real << "-i" << endl;
      else
         cout << "The complex number is: "<< real << img << "i" << endl;
      else
         if(img == 1)
            cout << "The complex number is: "<< real << " + i"<< endl;
         else
            cout << "The complex number is: "<< real << " + " << img << "i" <<
   endl;
}
void complex:: add(complex& c2) {
   real = real + c2.real;//addition for real part
   img = img + c2.img;//addition for imaginary part   //the result after addition
}
complex sub(complex c1, complex c2) {
   complex res;
   res.real = c1.real - c2.real;//subtraction for real part
   res.img = c1.img - c2.img;//subtraction for imaginary part
   return res;//the result after subtraction
};
int main(){
    // array<int,5> a; // array declaration
    // cout<<" enter 5 values";
    // for (int i=0 ; i<5; i++)
    // cin>>a[i];
    // array<int, 5> :: iterator i;
    // for(i=a.begin();i!=a.end();i++)
    // {
    //     cout<<*i<<" ";
    // }
    // cout<<endl;
    // array<int ,5> :: reverse_iterator i1;
    // for(i1=a.rbegin();i1!=a.rend();i1++)
    // cout<<*i1<<" ";
    // cout<<endl;
    // array <float, 5> a1={2.3,34.3,7.4,56.2,45.2};
    // float sum =0;
    // for(auto x:a1){
    //      sum = sum + x;
    // }
    // cout<<"the avarage is :: "<<sum/5;
    array <int ,10> a2={34,76 ,46 ,47,96,457,46,32,569,0};
    array <int ,10> :: iterator i2;
    // int max =a2[0];
    // for(i2=a2.begin();i2!=a2.end();i2++)
    // {
    //     if(max<*i2)
    //     max= *i2;
    // }
    // cout<<"  max is ::"<<max<<endl;
    // array<complex,5> a3;
    // array<complex,5> :: iterator i3;
    // for(i3=a3.begin();i3!=a3.end();i3++){
    //     i3->set();
    // }
    // for (complex x: a3){
    //     x.display();
    // }
    // complex sum;
    // array<complex ,5>::iterator i4;
    // for ( int i = 0;i < a3.size();i++){
    //     sum.add(a3[i]);
    // }
    // cout<<endl<<"-->";
    // sum.display();
    array<int, 10> :: iterator i5;
     for (i2=a2.begin();i2!=a2.end();i2++){
        for (i5=i2;i5!=a2.end();i5++){
            if(*i2<*i5)
            swap(*i2,*i5);
        }
     }
     for(int i=0;i<10;i++)
     cout<<a2[i]<<" ";
}
