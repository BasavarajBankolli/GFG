from collections import deque

class Solution:
    # Function to return Breadth First Search Traversal of given graph.
    def bfs(self, adj):
        # code here
        ver = len(adj)
        visit = [0 for _ in range(ver)]


        q = deque([0])
        visit[0] = 1
        
        bfs = []
        while q:
            left = q[0]
            bfs.append(left)
            q.popleft()
        
            for nie in adj[left]:
                if not visit[nie]:
                    q.append(nie)
                    visit[nie] = 1
                    
        return bfs