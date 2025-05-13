import math
class Solution:
    def nCr(self, n, r):
        if r > n: return 0
        
        return math.comb(n,r)


#{ 
 # Driver Code Starts
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        r = int(input())
        ob = Solution()
        print(ob.nCr(n, r))
        print("~")
# } Driver Code Ends