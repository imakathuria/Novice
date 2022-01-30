#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void c_p_c()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
/*_________________________________________________________________________*/
/*Is Cycle in Graph??*/
bool iscycle1(int sn,int n,vector<int> adj[],vector<bool>&visited){
    visited[sn]=1;
    queue<pair<int,int>> q;
    q.push({sn,-1});
    while(!q.empty()){
        pair<int,int> front = q.front();
        q.pop();
        for(auto i:adj[front.first]){
            if(!visited[i]){
                visited[i]=1;
                q.push({i,front.first});
            }else if(front.second!=i){
                return true;
            }
        }
    }
    return false;
}
bool iscycle(int n,vector<int> adj[]){
    vector<bool> visited(n+1,0);
    for(int i=1;i<=n;i++){
        if(!visited[i]) {
            if(iscycle1(i,n,adj,visited)){
                return true;
            }
        }
    } 
    return false;
}
/*Cycle detection in graph using BFS /|\*/
/*_________________________________________________________________________*/

vector<int> Bfs_Of_Graph(vector<int> adj[],int n){
    vector<bool> visited(n+1,0);
    vector<int> bfs;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            queue<int> q;
            q.push(i);
            visited[i]=1;
            while(!q.empty()){
                int front = q.front();
                q.pop();
                bfs.pb(front);
                for(auto it : adj[front]){
                    if(!visited[it]){
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
            bfs.pb(0);
        }
    }
    return bfs;


}
void graph()
{
    int vertices, edges;
    // One based indexing graph
    // Made using matrix
    cin >> vertices >> edges;
    /*
    int adj[vertices+1][vertices+1];
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    */
    // space complexity using matrix is O(n*n)
    vector<int> adj[vertices + 1];
    for (int i = 1; i <= edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    cout<<iscycle(vertices,adj)<<endl;
    // vector<int> bfs = Bfs_Of_Graph(adj,vertices);
    // for(auto i:bfs){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
}
void DFS_Traversal(vector<bool> &visited,int n,int sn,vector<int>&DFS_PATH,vector<int> adj[]){
    visited[sn]=1;
    DFS_PATH.pb(sn);
    for(auto i:adj[sn]){
        if(!visited[i]){
            DFS_Traversal(visited,n,i,DFS_PATH,adj);
        }
    }
}
void graph__DFS(){
    // Taking input
    int vertices, edges;
    cin >> vertices >> edges;
    vector<int> adj[vertices + 1];
    for (int i = 1; i <= edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int n=vertices,m=edges;
    vector<bool> visited(n,0);
    vector<int> DFS_PATH;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            DFS_Traversal(visited,n,i,DFS_PATH,adj);
        }
    }
    for(int i=0;i<DFS_PATH.size();i++){
        cout<<DFS_PATH[i]<<" ";
    }
    cout<<endl;
    return ;
}

int32_t main()
{
    // c_p_c();
    graph();
    // graph__DFS();
    return 0;
}
/*
TC
5 4 1 2 3 4 4 5 5 3
5 4 1 4 2 5 3 5 2 3
5 5 1 5 5 3 4 1 2 4 2 3

3 3 1 2 2 3 1 3
3 2 1 2 2 3

*/