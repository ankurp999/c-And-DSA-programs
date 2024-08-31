#include<iostream>
#include<stdio.h>
#include<queue>
#include<stack>
using namespace std;
struct node{
    int vertex;
    node* next;
};
class adjecentlist{
     node* start;
    public:
    adjecentlist(){
        start=NULL;
    }
    node* returnNode()
   {
    return start;
    } 
    void INsertAtBeginning(int vertex){
        node *n = new node;
        n->vertex=vertex;
        n->next=start;
        start=n; 
    }
    void display(){
        node *temp=start;
        while(temp!=NULL){
            cout<<temp->vertex<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void INsertAtLast(int vertex){
        node *n=new node,*temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        } 
         n->vertex=vertex;
        n->next=NULL;
        temp->next=n;
    }
    bool search(int vertex){
        node *temp=start;
        while(temp!=NULL){
            if(temp->vertex==vertex)
            return 1;
            temp=temp->next;
        }
        return 0;
    }
    int count(){
        node *temp=start;
        int i=0;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        return i;
    }
    void Insert(int a,int vertex){
        node *temp=start;
        node *n=new node;
            int i=1;
            if(a==1)
            INsertAtBeginning(vertex);
            else{
            while(i++<a-1 && temp->next!=NULL){
                temp=temp->next;
             }
           if(temp==NULL)
           INsertAtLast(vertex);
           n->vertex=vertex;
           n->next=temp->next;
           temp->next=n;
           }
    }
    void delFirst(){
        node *temp=start;
        start=temp->next;
        delete temp;
    }
    void delLast(){
        node *temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        delete (temp);
        temp->next=NULL;
    }
    void delany(int a){
        node *temp=start;
        node *ptr=NULL;
        int i=1;
        while(i++<a-1 && temp->next!=NULL){
          temp=temp->next;
        }
        ptr=temp->next;
          temp->next=ptr->next;
          delete ptr;
          
    }
};
class graph{
    adjecentlist *adj;
    int vcount;
    public:
    graph(int a){
        vcount= a;
        adj=NULL;
    }
    void creategraph(){
        adj = new adjecentlist[vcount];
        for (int i=0; i<vcount;i++){
            cout<<"how many nodes are connected with V"<<i;
            cout<<endl;
            int temp;
            cin>>temp;

            cout<<"enter the connecting vertex V"<<i<<" ";
            for(int j=0; j<temp; j++){
                int a;
                cin>>a;
                adj[i].INsertAtBeginning(a);
            }
            
        } 
        cout<<endl; 
        // BFS(0);
        DFS(0);
    }
    void displayGraph(){
        for(int i=0; i<vcount; i++){
            cout<<"V"<<i<<"-";
            adj[i].display();
        }
    }

int getvcount(){
    return vcount;
}
void BFS (int s){
    bool v[5]= {false};
     queue<int> Q;
     Q.push(0);
     v[0]=true;
     adjecentlist sll;
     int i=0;
     while(!Q.empty()){
        int n = Q.front();
        // cout<<" "<<n<<" ";
        Q.pop();
        sll.INsertAtBeginning(n);
        node* temp=adj[i].returnNode();
        i++;
        while(temp!=NULL)
        {
            int index = temp->vertex;
            if(v[index]== false){
            Q.push(index);
            v[index]=true;
            }
            temp= temp->next;
        }
     }
     sll.display();
}
void DFS(int s){
    bool vis[5]={false};
    stack<int> S;
    S.push(0);
    vis[0]=true;
    S.pop();
    // adjecentlist sll_of_dfs;
    int i=0;
    // cout<<endl;
    while(!S.empty()){
    node* temp =adj[i].returnNode();
    i++;
    int n = S.top();
    cout<<n<<" ";
    S.pop();
    while(temp!=NULL){
        int index = temp->vertex;
        if(vis[index]== false){
            S.push(index);
            vis[index]= true;
        }
        temp = temp->next;
    }
    }
}
};
int main(){
    graph a(5);
    a.creategraph();
    // a.displayGraph();
    
return 0;
}