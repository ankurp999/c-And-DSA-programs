#include<iostream>
#include<stdio.h>
using namespace std;
#include<iostream>
using namespace std;
class employee{
    string name;
    string e_mail;
    float salary;
    public:
    string getName(){
     return name;
    }
    void setter(string n){
     name = n;
    }
    void settersalary(int n){
        salary= n;
    }
    int getsalary(){
        return salary;
    }
    employee& operator=(employee& S){
        setter( S.name);
        settersalary( S.salary);
        return *this;
    }
    void display(){
    cout<<name<<" "<<salary<<endl;
    }
};
void quick(int(&)[10],int,int);
void merge(employee(&a)[5],int left,int right,int mid)
{
   int n1= mid-left+1;
   int n2 =right-mid;
   employee rightarr[n2],leftarr[n1];
   for(int i=0; i<n1;i++)
   leftarr[i]=a[left+i];
   for(int j=0;j<n2;j++)
   rightarr[j]=a[j+mid+1];

   int i=0;
   int j=0;
   int k = left;
   while(i<n1 && j<n2)
   {
     if(leftarr[i].getsalary()<=rightarr[j].getsalary()){
        a[k]=leftarr[i];
        i++;
     }
     else{
        a[k]=rightarr[j];
        j++;
     }
     k++;
   }
   while(i<n1){
    a[k]=leftarr[i];
    i++;
    k++;
   }
   while(j<n2){
    a[k]=rightarr[j];
    j++;
    k++;
   }
}
void mergesort(employee(&a)[5],int left, int right){
   if(left<right){
    int mid= (left+right)/2;
    mergesort(a,left,mid);
    mergesort(a,mid+1,right);
    merge(a,left,right,mid);
   }
}
int main(){
    // int arr[10]={7,2,34,31,68,42,84,86,90,3};
    // bubble and modified bubble sort
    // for(int i=0;i<=9;i++)
    // {
    //     bool flag = false;
    //     for (int j=0;j<=9-i;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             flag = true;
    //             int temp = arr[j];
    //             arr[j]= arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    //     if(flag==false)
    //     break;
    // }
    // cout<<" modified bubble sort : "<<endl;


           //--- selection sort
    //   for(int i= 0; i<=9; i++){
    //     int min = i;
    //     for (int j=i+1; j<=9;j++)
    //     { 
    //         if(arr[min]>arr[j])
    //             min = j ;
            
    //     }
    //             int temp = arr[i];
    //             arr[i]= arr[min];
    //             arr[min]=temp;
    //   }
      

      //Insertion sort

    //   for(int i=0;i<10;i++){
    //     int temp = arr[i];
    //     int m=i;
    //     for (int j=i-1;j>=0;j--){
    //         if(temp<arr[j]){
    //         int temp2 = arr[m];
    //             arr[m]= arr[j];
    //             arr[j]=temp2;
    //             m--;
    //         }
    //     }
    //  }
    // quick(arr,0,9);
     employee E[5];
     
     for (int i=0; i<5; i++){
        string n;
        cin>>n;
        E[i].setter(n);
        int n1;
       cin>>n1;
        E[i].settersalary(n1);
     }
     mergesort(E,0,4);
 for(int i=0; i<5; i++)
    E[i].display();
   
    return 0;
}
int partition(int (&a)[10],int left ,int right){
     int loc = left;
//  for(int i= 0; i<5;i++){
    //     if(i>0){
    //     right = loc;
    //     left = i;
    //     loc = left;}

    while(1){
    if(loc<right)
    {
        if(a[loc]>a[right]){
        swap(a[loc],a[right]);
        loc = right;
        left++;
        }
        else
        right--;
    }
     if(loc>left)
    {
        if(a[loc]<a[left]){
        swap(a[loc],a[left]);
        loc=left;
        right--;

    }
    else
        left++;
    }
    if(left>=right)
    break;
    }
   return loc;
}
void quick(int (&a)[10],int left,int right)
{
    
    int loc = partition(a,left,right);
    if(loc>left+1)
    quick(a,left,loc-1);
    if(loc<right+1)
    quick(a,loc+1,right);
}