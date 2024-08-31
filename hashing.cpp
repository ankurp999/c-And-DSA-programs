#include<iostream>
#include<string>
using namespace std;

class student{
    int roll_no;
    string name;
    string stream;
    int year;
    public:
    void set(int rn,string n,string st,int y){
        roll_no = rn;
        name = n;
        stream = st;
        year = y;
    }
    int getroll(){
        return roll_no;
    }
    void display(){
        cout<<"the roll number is : "<<roll_no<<endl;
        cout<<"name : "<<name<<endl;
        cout<<" stream : "<<stream<<endl;
        cout<<"year : "<<year<<endl;
    }
};


struct node{
       student item;
       node* next;
};

class hashtable{
      int capacity;
      node** ptr;
      public:
      hashtable(int s){
        capacity =s;
        ptr= new node*[capacity];
        for (int i = 0; i < capacity; ++i)
            ptr[i] = NULL;
      }
      int hashfun(int rn){
        return rn % 10;
      }
void insert(student& st){
        int key = hashfun(st.getroll());
        node* n = new node;
        n->item = st;
        n->next = NULL;
        if(ptr[key] == NULL){
          ptr[key] = n;
        }
        else
        {   node* temp = ptr[key];
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = n;
        }
      }
      void DIsplayHT(){
        for (int i = 0; i < capacity; i++){
            cout << "Bucket " << (i+1) << ":" << endl;
            if(ptr[i] == NULL)
                cout << " khali hai bhai ye wala" << endl;
            else {
                node* temp = ptr[i];
                while(temp != NULL){
                    temp->item.display();
                    cout << endl;
                    temp = temp->next;
                }
            }
        }
      }
      student* search(int rn){
        int trn;
        trn= rn%10;
        if(ptr[trn]==NULL)
        return NULL;
    
            node* temp = ptr[trn];
            while(temp!= NULL){
           if(temp->item.getroll() == rn) {
            return &temp->item;
            temp = temp->next;
           }
        }
        return NULL;
        
      }
};
int main(){
    
    student S[4];
    hashtable h(10);

    for(int i = 0; i < 4; i++){
        int r,y;
        string n,s;
        cin >> r >>n >> s>>y;
        S[i].set(r,n,s,y);
        h.insert(S[i]);
    }
    cout << "Inserted Students:" << endl;
    for(int i = 0; i < 4; i++)
        S[i].display();

    cout << endl << "Hashtable Contents:" << endl;
    h.DIsplayHT();
    student *t =h.search(123);
    if(t != NULL)
    t->display();
    else cout <<  "NULL";

    return 0;
}
