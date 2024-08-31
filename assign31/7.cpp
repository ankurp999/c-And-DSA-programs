//define a overloaded function to volume of a cuboid ,cone and sphere;'
#include<iostream>
using namespace std;
float volume(int r){
    return 4.0/3.0*3.14*r*r*r;
}
float volume(int r,int h){
    return 0.333*r*h;
}
int volume(int l,int b,int h){
    return l*b*h;
}
int main(){
    int l,b,h;
    cout<<"enter l ,b and h of the cuboid ";
    cin>>l>>b>>h;
    cout<<volume(l,b,h);
    int r;
    cout<<"enter r and h of the cone ";
    cin>>r>>h;
    cout<<volume(r,h);
    int R;
    cout<<"enter radius of sphere ";
    cin>>R;
    cout<<volume(R);

}