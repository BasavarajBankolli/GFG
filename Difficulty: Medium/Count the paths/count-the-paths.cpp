class Solution {
  public:
    int dfs(vector<vector<int>> &adj, vector<int> &seen, int cur, int dest){
       
       if (cur == dest) return 1;
       if (seen[cur] != -1) return seen[cur]; 
       
       int cnt = 0;
       for (int nbr:adj[cur]){
          cnt += dfs(adj, seen, nbr, dest); 
       }
       
       return seen[cur] = cnt;
    }
    
    
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
        vector<vector<int>> adjmt(V);
        vector<int> seen(V,-1);
        
        for (auto &edge: edges){
            adjmt[edge[0]].push_back(edge[1]);
        }
    
        return dfs(adjmt, seen, src, dest);
        
        
    }
};