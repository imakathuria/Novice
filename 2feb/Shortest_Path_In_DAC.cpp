#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int,int>
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void topo_Sort(vector<pii> adj[],stack<int>&s,int n,int se,vector<bool>&vis){
    if(!vis[se]){
        vis[se]=1;
    }
    for(auto it:adj[se]){
        topo_Sort(adj,s,n,it.first,vis);
    }
    s.push(se);
}
void find_shortest_path(vector<pii> adj[],int n){
    stack<int> s;
    vector<bool> vis(n,0);
    int src=0;
    topo_Sort(adj,s,n,src,vis);
    vector<int> dis(n,INT_MAX);
    dis[0]=0;
    while(!s.empty()){
        int top = s.top();
        s.pop();
        for(auto it:adj[top]){
            if(dis[top]+it.second<dis[it.first]){
               dis[it.first]=dis[top]+it.second;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<dis[i]<<" ";
    }
    cout<<endl;
}
int32_t main()
{
	c_p_c();
    int v,e;
    cin>>v>>e;
    vector<pii> adj[e];
    for(int i=0;i<e;i++){
        int s,d,dis;
        cin>>s>>d>>dis;
        adj[s].pb({d,dis});
    }
    find_shortest_path(adj,v);
    return 0;
}
/*
    Time complexity : O(N+E)*2
    Space Complextiy : O(2*N)
    Auxiliary Space : O(N) (In DFS Topo Recursion stack)
    ___________
    Test Cases
    ___________
    7 7
    0 1 2
    1 3 5
    3 5 8
    5 6 3
    0 2 3
    2 4 7
    4 5 1
    ___________
    6 7
    0 1 2
    1 2 3
    2 3 6
    0 4 1
    4 5 4
    5 3 1
    4 2 2

*/