#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
/*
Test cases (➡⬅⬆⬇↗↙↘↖)

6 6 5 6 5 2 2 3 3 1 4 6 4 1
 
        5 ➡ 6 ⬅ 4
        ⬇         ⬇
        2 ➡ 3 ➡ 1
        
10 9 5 1 5 3 5 4 5 2 1 6 1 7 4 8 4 9 2 10
*/
void topo_Sort(vector<int> adj[],int n,int se) {
    // compute indegree of all vertices
    vector<int> indegree(n+1,0);
    for(int i=1;i<=n;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    /*
    Test Cases
        2
        6 6 5 6 4 6 5 2 4 1 2 3 3 1
        10 9 5 1 5 3 5 4 5 2 1 6 1 7 4 8 4 9 2 10
    */
    // push all elements with indegree 0 to queue
    queue<int> pendingNodes;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0){
            pendingNodes.push(i);
        }
    }
    cout<<endl;
    vector<int> topo;
    // now make a loop while queue is not empty
    while(!pendingNodes.empty()){
        int front = pendingNodes.front();
        pendingNodes.pop();
        topo.push_back(front);
        for(auto it:adj[front]){
            indegree[it]--;
            if(indegree[it]==0){
                pendingNodes.push(it);
            }
        }
    }
    for(auto it:topo){
        cout<<it<<" ";
    }
}

void bfs(vector<int> adj[],int n){
    topo_Sort(adj,n,1);
}

void graph(){
    int e,v;
    cin>>v>>e;
    vector<int> adj[v+1];
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
    }
    bfs(adj,v);
}
void solve(){
    int t;
    cin>>t;
    while (t--)
    {
        graph();
    }
}
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
	c_p_c();
    solve();
	return 0;
}