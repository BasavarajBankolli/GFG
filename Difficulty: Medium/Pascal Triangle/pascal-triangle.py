#User function Template for python3
class Solution:

	def nthRowOfPascalTriangle(self, n):
	    a = [1]*20
        r = [1]*20
        for i in range(1, n+1):
            for j in range(1, i-1):
                r[j] = a[j] + a[j-1]
            for j in range(i):
                a[j] = r[j]
            
        return a[:n]
            
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    tc = int(input())
    while tc > 0:
        n = int(input())
        ob = Solution()
        ans = ob.nthRowOfPascalTriangle(n)
        for x in ans:
            print(x, end=" ")
        print()
        tc = tc - 1
        print("~")
# } Driver Code Ends