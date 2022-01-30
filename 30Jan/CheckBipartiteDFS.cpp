#include<bits/stdc++.h>
using namespace std;
#define pb push_back
bool IsBipartite(int n,vector<int> &colour,vector<int> adj[],int se){
    if(colour[se]==-1){
        colour[se]=1;
    }
    for(auto it:adj[se]){
        if(colour[it]==-1){
            colour[it]=1-colour[se];
            if(!IsBipartite(n,colour,adj,it)){
                return false;
            }
        }else if(colour[it]==colour[se]){
            return false;
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