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
    int src=0;
    vector<int> dis(n,INT_MAX);
    dis[0]=0;
    priority_queue<pii> pq;
    pq.push({0,src});
    while(!pq.empty()){
        pii top = pq.top();
        pq.pop();
        for(auto it:adj[top.second]){
            if(dis[it.first]>dis[top.second]+it.second){
                dis[it.first]=dis[top.second]+it.second;
                pq.push({dis[it.first],it.first});
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
        adj[d].pb({s,dis});
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
    6 7
    0 1 0
    1 2 2
    2 5 5
    1 4 1
    2 3 4
    5 3 1
    4 3 3

*/