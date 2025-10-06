
class Solution:
    def isCycle(self, V, edges):
        # code here
        adj = [[] for _ in range(V)]
        
        for u,v in edges:
            adj[u].append(v)
            
        
        vis = [0]*V
        pathvis = [0]*V
        
        def dfs(ver):
            
            vis[ver] = 1
            pathvis[ver] = 1
            
            for nie in adj[ver]:
                if vis[nie] == 0:
                    if dfs(nie):
                        return True
                        
                elif pathvis[nie] == 1:
                    return True
                        
            pathvis[ver] = 0
            return False
            
        for node in range(V):
            if vis[node] == 0:
                if dfs(node):
                    return True
                    
        return False
                