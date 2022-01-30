#include<bits/stdc++.h>
using namespace std;
#define pb push_back
bool IsCycleDFS(int n,vector<int> &visited,vector<int> adj[],int se,vector<int> &visitedDFS){
    if(visited[se]==-1){
        visited[se]=1;
        visitedDFS[se]=1;
    }
    for(auto it:adj[se]){
        if(visited[it]==-1){
            visited[it]=1;
            if(IsCycleDFS(n,visited,adj,it,visitedDFS)){
                return true;
            }
        }else if(visited[it]==visitedDFS[it]){
            return true;
        }
    }
    return false;
}
void solver(vector<int> adj[],int n){
    vector<int> visited(n+1,-1);
    vector<int> visitedDFS(n+1,-1);
    for(int i=1;i<=n;i++){
        if(visited[i]==-1){
            if(IsCycleDFS(n,visited,adj,i,visitedDFS)){
                cout<<"True"<<endl;
                return ;
            }
        }
    }
    cout<<"False"<<endl;
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
        // adj[v].pb(u);
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
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    c_p_c();
    graph();
    return 0;
}