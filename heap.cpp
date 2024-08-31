#include <iostream>
#include <stdio.h>
using namespace std;
class heap
{
    int capacity;
    int lastindex;
    int *ptr;

public:
    heap(int size)
    {
        lastindex = -1;
        capacity = size;
        ptr = new int[capacity];
    }
    void insert(int val)
    {
        if (lastindex == -1)
        {
            lastindex = 0;
            ptr[lastindex] = val;
        }
        else
        {
            lastindex++;
            ptr[lastindex] = val;
            int index = lastindex;
            while (index != 0)
            {
                int temp = index;
                index = (index - 1) / 2;
                if (ptr[index] < ptr[temp])
                    swap(ptr[index], ptr[temp]);
            }
        }
    }
    void display()
    {
        for (int i = 0; i <= lastindex; i++)
            cout << ptr[i] << " ";
    }
    int top()
    {
        return ptr[0];
    }
    void deleteroot()
    {
        swap(ptr[0], ptr[lastindex]);
        --lastindex;

        int index1 = 0, index2 = 0;
        int temp = 0;
        while (true)
        {
            index1 = 2 * index1 + 1;
            index2 =2*index2+2;

            if (index2<=lastindex && index1<=lastindex )
            {
                if(ptr[index2]<ptr[index1]){
                if (ptr[temp] < ptr[index1]){
                    swap(ptr[index1], ptr[temp]);
                temp = index1;}
                }
               else
                   {
                if (ptr[temp] < ptr[index2]){
                    swap(ptr[index2],ptr[temp]);
                    temp = index2;}
                 }
            }
            else if(index1<=lastindex){
                if(ptr[temp]<ptr[index1])
                swap(ptr[temp],ptr[index1]);
            }
            else temp++;

            if(index1> lastindex || index2> lastindex)
                break;
        }
        // cout << ptr[lastindex]<<endl;

    
    }
    void sort(){
        for (int i=lastindex;i>0;i--)
        deleteroot();
        lastindex=10;
    }
};
int main()
{
    heap a(11);
    a.insert(20);
    a.insert(35);
    a.insert(70);
    a.insert(14);
    a.insert(60);
    a.insert(80);
    a.insert(54);
    a.insert(72);
    a.insert(30);
    a.insert(44);
    a.insert(12);
    a.display();
    // cout << endl;
    // a.deleteroot();
    // a.display();
    // cout << endl;
    // a.deleteroot();
    // a.display();
    // cout << endl;
    // a.deleteroot();
    // a.display();
    // cout << endl;
    // a.deleteroot();
    // a.display();
    // cout << endl;
    // a.deleteroot();
    // a.display();
    // cout << endl;
    // a.deleteroot();
    // a.display();
    // cout << endl;
    // a.deleteroot();
    // a.display();


    cout << endl;
    a.sort();
    a.display();

    return 0;
}