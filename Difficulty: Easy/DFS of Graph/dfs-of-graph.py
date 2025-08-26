class Solution:
    
    #Function to return a list containing the DFS traversal of the graph.
    def dfs(self, adj):
        # code here
        res = []
        visit = [0]*len(adj)
        
        def fun(v):
            res.append(v)
            visit[v] = 1
            
            for nie in adj[v]:
                if not visit[nie]:
                    fun(nie)
                    
        
        fun(0)    
        return res