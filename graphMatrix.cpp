#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Graph{
    int V_count;
    int E_count;
    int **adj;
    public:
    void CreateGraph(int v, int e){
        
        V_count = v;
        E_count = e;
        adj = new int*[V_count];
        for (int i= 0; i<v; i++)
        adj[i]= new int[V_count];
        for(int i= 0; i< v ; i++){
            for(int j=0; j< v; j++){
                adj[i][j]=0;
            }
        }
        for(int k=0;k<e;k++)
        {
            int a,b;
            cout<<"enter node number connecting edge";
            cin>>a>>b;
            adj[a][b]=1;
            adj[b][a]=1;
        }
    }
    void printGraph(){
        for(int i= 0; i< V_count; i++){
            for(int j=0; j< V_count; j++)
            cout<<adj[i][j]<<" ";
            cout<<endl;
        }
    }
    void printAdjecentNode(int a){
        
            for ( int j= 0; j<V_count; j++){
                if(adj[a][j]==1)
                cout<<"V"<<j<<" ";
            }
    }
    bool isolated(int v){
        bool flag=true;
        for (int i=0; i<V_count ; i++){
            if(adj[v][i]==1)
            flag=false;
            break;
        }
        return flag;
    }
    // ~Graph(){
    //     for (int i= 0; i<V_count; i++){
    //     delete []adj;
    //     }
    // }
    void BFS(int s){
        bool vis[5]={ false};
        queue<int> Q;
        Q.push(adj[0][0]);
        vis[0]=true;
        for(int i=0; i<5;i++){
            int n= Q.front();
            cout<<" "<<n;
            Q.pop();
            for(int j=0; j<5;j++){
                if(vis[j]==false)
                {
                    if(adj[i][j]==1){
                    Q.push(j);
                    vis[j]=true;
                    }
                }
            }
        }

        
    }
    void DFS(int s){
        bool vis[5]={ false};
        stack<int> Q;
        Q.push(adj[0][0]);
        vis[0]=true;
        for(int i=0; i<5;i++){
            int n= Q.top();
            cout<<" "<<n;
            Q.pop();
            for(int j=0; j<5;j++){
                if(vis[j]==false)
                {
                    if(adj[i][j]==1){
                    Q.push(j);
                    vis[j]=true;
                    }
                }
            }
        }

        
    }


};
int main(){
    Graph a;
    a.CreateGraph(5,6);

    a.printGraph();
    a.BFS(0);
    a.DFS(0);

    // a.printAdjecentNode(0);
    // cout<<endl;
    // cout<<a.isolated(0);
return 0;
}