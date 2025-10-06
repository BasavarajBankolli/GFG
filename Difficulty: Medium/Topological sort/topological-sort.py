class Solution:
    
    def topoSort(self, V, edges):
        # Code here
        vis = [0]*V
        st = []
        
        adj = [[] for _ in range(V)]
        for u,v in edges:
            adj[u].append(v)
            
        
        def dfs(ver):
        
            vis[ver] = 1
            
            for nie in adj[ver]:
                if vis[nie] == 0:
                    dfs(nie)
                    
            st.append(ver)
    
        
        for v in range(V):
            if vis[v] == 0:
                dfs(v)
                
        st = st[::-1]
        return st