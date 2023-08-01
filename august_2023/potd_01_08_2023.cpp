#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}

class Solution {
  public:
  
    void dfs(int V, vector<int> adj[], vector<int> &res, unordered_set<int> &visited) {
        res.push_back(V);
        visited.insert(V);
        for (int i = 0; i < adj[V].size(); i++) {
            if (visited.find(adj[V][i]) == visited.end()) {
                dfs(adj[V][i], adj, res, visited);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> res;
        unordered_set<int> visited;
        dfs(0, adj, res, visited);
        return res;
    }
};