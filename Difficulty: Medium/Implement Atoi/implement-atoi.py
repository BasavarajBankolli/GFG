#User function template for Python
class Solution:
    def myAtoi(self, s):
        # Code here
        s = s.lstrip()
        sgn = 1
        res = 0
        
        i = 0
        
        if s[i] == '-' or s[i] == '+':
            sgn = -1 if s[i] == '-' else 1
            i += 1
            
        while i < len(s) and s[i].isdigit():
            res = res*10 + int(s[i])
            i += 1
            
        res *= sgn
        
        mn, mx = - 2**31, 2**31-1
        
        if res > mx:
            return mx
        elif res < mn:
            return mn
            
        return res


#{ 
 # Driver Code Starts
#Initial template for Python

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = input()
        ob = Solution()
        print(ob.myAtoi(s))
        print("~")

# } Driver Code Ends