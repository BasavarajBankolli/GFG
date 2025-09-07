class Solution:
    # Function to return connected components of the graph
    def getComponents(self, V, edges):
        # code here
        
        adjlist = [[] for _ in range(V)]
        
        vis = [0]*V
        for v,u in edges:
            adjlist[v].append(u)
            adjlist[u].append(v)
            
            
        def dfs(i, comp = []):
            vis[i] = 1
            comp.append(i)
            
            for nie in adjlist[i]:
                if not vis[nie]:
                    dfs(nie, comp)
            
        res = []
        for i in range(V):

            if vis[i] == 0:
                comp = []
                dfs(i, comp)
                res.append(comp)
            
            
        return res
        