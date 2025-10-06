from collections import deque

class Solution:
	def isCycle(self, V, edges):
		#Code here
		
		adj = [[] for _ in range(V)]
		
		for u,v in edges:
		    adj[u].append(v)
		    adj[v].append(u)
		
		vis = [0]*V
		
		def check(src):
		    q = deque()
		    q.append((src, -1))
		    vis[src] = 1
		    
		    while q:
		        src, par = q.popleft() 
    		    for nie in adj[src]:
    		        
    		        if vis[nie] == 0:
                        vis[nie] = 1
                        q.append((nie, src))

    		        elif nie != par:
    		            return True
    		            
    	    return False
		      
		for node in range(V):
		    if vis[node] == 0:
		        if check(node):
		            return True
		             
        return False
		     
		     
		     