/*
********************************************************************************************

░█████╗░██╗░░░██╗████████╗██╗░░██╗░█████╗░██████╗░  ██╗  ░█████╗░██╗░░██╗██╗░░██╗██╗██╗░░░░░
██╔══██╗██║░░░██║╚══██╔══╝██║░░██║██╔══██╗██╔══██╗  ╚═╝  ██╔══██╗██║░██╔╝██║░░██║██║██║░░░░░
███████║██║░░░██║░░░██║░░░███████║██║░░██║██████╔╝  ░░░  ███████║█████═╝░███████║██║██║░░░░░
██╔══██║██║░░░██║░░░██║░░░██╔══██║██║░░██║██╔══██╗  ░░░  ██╔══██║██╔═██╗░██╔══██║██║██║░░░░░
██║░░██║╚██████╔╝░░░██║░░░██║░░██║╚█████╔╝██║░░██║  ██╗  ██║░░██║██║░╚██╗██║░░██║██║███████╗
╚═╝░░╚═╝░╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝  ╚═╝  ╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚══════╝

**********************************************************************************************
*/
#include<bits/stdc++.h>
#include <iostream>
#define ll long long 
using namespace std;

#define forn(i, n) for(int i=0;i<n;++i)
#define fore(i, l, r) for(int i = int(l); i <= int(r); ++i)
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define x first
#define y1 ________y1
#define y second
#define ft first
#define sc second
#define pii pair<int, int>
#define sumv(arr) accumulate(all(arr),0)
// BSF Check for bipartite
bool bfsbipartite(vector<bool> &visited, int v, vector<int> adj[], int sv,vector<int> &colour)
{
    visited[sv]=1;
    colour[sv]=1;
    queue<int>pn;
    pn.push(sv);
    while(!pn.empty()){
        int front = pn.front();
        int clr = colour[front];
        pn.pop();
        for(auto it:adj[front]){
            if(!visited[it]){
                visited[it]=1;
                pn.push(it);
                colour[it]=1-clr;
            }
            else if(colour[it]==clr){
                return false;
            }
        }
    }
    return true;
}
// BFS traversal to check cycle
bool bfs(vector<bool> &visited, int v, vector<int> adj[], int sv){
    cout<<"inside bfs"<<endl;
    queue<pii> pn;
    pn.push({sv,-1});
    visited[sv]=1;
    while(!pn.empty()){
        int front = pn.front().first;
        int parent = pn.front().second;
        pn.pop();
        for(auto it:adj[front]){
            if(!visited[it]){
                pn.push({it,front});
                visited[it]=1;
            }else if(parent != it){
                return true;
            }
        }
    }
    return false;
}
// DFS traversal to check cycle
bool dfs(vector<bool> &visited, int v, vector<int> adj[], int sv,int par=-1){
    visited[sv]=1;
    for(auto it: adj[sv]){
        if(!visited[it]){
            if(dfs(visited,v,adj,it,sv)){
                return true;
            }
        }else if(it!=par){
            return true;
        }
    }
    return false;
}
void graphTraversal(int v,vector<bool> &visited,vector<int> adj[]){
    cout<<"Inside graph traversal"<<endl;
    vector<int> colour(v+1,-1);
    for(int i=1;i<=v;i++){
        if(!visited[i]){
            cout<<i<<" ";
            if(!bfsbipartite(visited,v,adj,i,colour)){
                cout<<"False"<<endl;
                return;
            }
        }
    }
    cout<<"True\n";
    return;
}
void graph(){
    cout<<"inside graph"<<endl;
    int v,e;
    cin>>v>>e;
    cout<<v<<e<<endl;
    vector<int> adj[v+1];
    vector<bool> visited(v+1,0);
    forn(i,v)cout<<visited[i]<<" ";
    cout<<endl;
    for(int i=0;i<e;i++){
        cout<<"Input i : "<<i;
        int u,v;
        cin>>u>>v;
        cout<<" "<<u<<v<<endl;
        adj[u].pb(v);
        adj[v].pb(u);
        
    }
    cout<<endl;
    cout<<"calling graphtraversal"<<endl;
    graphTraversal(v,visited,adj);
    return;
}
void solve(){
    cout<<"Inside solve"<<endl;
    graph();
}

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main()
{
    c_p_c(); 
    // int t;
    // cin>>t;
    // while(t--)
        solve();
    
    return 0;
}

/*
11 9
1 2
2 4
3 5
5 6
6 7
5 10
10 9
9 8
8 11
7 8
*/
/******************************************************************************************         ||                                                                                         ||
||                    ░█▀▀▀ ░█▄─░█ ░█▀▀▄ 　 ░█▀▀█ ░█▀▀▀█ ░█▀▀▄ ░█▀▀▀                       ||
||                    ░█▀▀▀ ░█░█░█ ░█─░█ 　 ░█─── ░█──░█ ░█─░█ ░█▀▀▀                       ||
||                    ░█▄▄▄ ░█──▀█ ░█▄▄▀ 　 ░█▄▄█ ░█▄▄▄█ ░█▄▄▀ ░█▄▄▄                       ||
||                                                                                         ||
*******************************************************************************************/