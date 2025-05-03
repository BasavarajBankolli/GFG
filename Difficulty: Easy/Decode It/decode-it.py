#User function Template for python3

class Solution:

    def decodeIt(self, s, k):
        # code here
        decode = []
        for c in s:
            if c.isalpha():
                decode.append(c)
            else:
                decode = decode * int(c)
        
        return decode[k-1]
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        Str = input()
        k = int(input())

        solObj = Solution()

        print(solObj.decodeIt(Str, k))
# } Driver Code Ends