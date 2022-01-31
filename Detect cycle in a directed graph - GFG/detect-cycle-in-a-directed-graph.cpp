// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool topo_Sort(vector<int> adj[],int n,int se) {
        // compute indegree of all vertices
        vector<int> indegree(n+1,0);
        for(int i=1;i<=n;i++){
            for(auto it:adj[i]){
                if(it==i){
                    return 1;
                }
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
        vector<int> topo;
        int count_for_topological_sort=0;
        // now make a loop while queue is not empty
        while(!pendingNodes.empty()){
            int front = pendingNodes.front();
            pendingNodes.pop();
            topo.push_back(front);
            count_for_topological_sort++;
            for(auto it:adj[front]){
                indegree[it]--;
                if(indegree[it]==0){
                    pendingNodes.push(it);
                }
            }
        }
        if(count_for_topological_sort==n){
            return false;
            cout<<"There is No Cycle in this graph"<<endl;
            for(auto it:topo){
                cout<<it<<" ";
            }
            cout<<endl;
        }else{
            return true;
            cout<<"There is Cycle in this graph"<<endl;
        }
        
    }

    bool bfs(vector<int> adj[],int n){
        return topo_Sort(adj,n,1);
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> adj1[V+1];
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                adj1[i+1].push_back(it+1);
            }
        }
        return bfs(adj1,V);
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends