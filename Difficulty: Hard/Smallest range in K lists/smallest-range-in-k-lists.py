import heapq
class Solution:
    def findSmallestRange(self, arr):

        k = len(arr)  
        n = len(arr[0])  
    
        mx = float('-inf')
        mnheap = []
    
        for i in range(k):
            heapq.heappush(mnheap, (arr[i][0], i, 0))  
            mx = max(mx, arr[i][0])
    
        mnres = float('inf')
        l = r = -1
    
        while True:
            mn, row, col = heapq.heappop(mnheap)
    
            if mx - mn < mnres:
                mnres = mx - mn
                l = mn
                r = mx
    
            if col == n - 1:
                break
    
            nxtval = arr[row][col + 1]
            heapq.heappush(mnheap, (nxtval, row, col + 1))
            mx = max(mx, nxtval)
    
        return [l, r]


#{ 
 # Driver Code Starts
# Initial Template for Python 3

t = int(input())
for _ in range(t):
    n = int(input())
    k = int(input())
    arr = []
    for _ in range(k):
        arr.append(list(map(int, input().strip().split())))
    r = Solution().findSmallestRange(arr)
    print(r[0], r[1])
    print("~")

# } Driver Code Ends