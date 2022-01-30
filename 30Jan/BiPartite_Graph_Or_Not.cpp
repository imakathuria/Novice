#include<bits/stdc++.h>
using namespace std;
#define pb push_back
bool IsBipartite(int n,vector<int> &colour,vector<int> adj[],int se){
    colour[se]=0;
    queue<int> q;
    q.push(se);
    while(!q.empty()){
        int front=q.front();
        int clr = colour[front];
        q.pop();
        for(auto it:adj[front]){
            if(colour[it]==-1){
                colour[it]=1-clr;
                q.push(it);
            }else if(colour[it]==clr){
                return false;
            }
        }
    }
    return true;
}
void solver(vector<int> adj[],int n){
    vector<int> colour(n+1,-1);
    for(int i=1;i<=n;i++){
        if(colour[i]==-1){
            if(!IsBipartite(n,colour,adj,i)){
                cout<<"False"<<endl;
                return ;
            }
        }
    }
    cout<<"True"<<endl;
    return;
}
void graph(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    solver(adj,n);
    return;
}
/*
TEST CASES
7 7 1 2 2 3 3 4 4 5 5 7 2 6 6 5
8 8 1 2 2 3 3 4 4 5 2 6 6 7 7 5 5 8
5 4 1 2 2 3 3 4 4 5
*/
int main(){
    graph();
    return 0;
}