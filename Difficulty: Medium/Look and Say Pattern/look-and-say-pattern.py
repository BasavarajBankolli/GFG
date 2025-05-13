class Solution:
    def countAndSay(self, n):
        if n == 1: return "1"
        
        
        tmp1 = [1, 1]
    
    
        for _ in range(2,n):
            cnt = 1
            tmp2 = []
            for i in range(1, len(tmp1)):
                if tmp1[i] == tmp1[i - 1]:
                    cnt += 1
    
                else:
                    tmp2.append(cnt)
                    tmp2.append(tmp1[i - 1])
                    cnt = 1
    
            tmp2.append(cnt)
            tmp2.append(tmp1[-1])
    
    
            tmp1 = tmp2
    
        return ''.join(map(str, tmp1))


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        n = int(input())

        solObj = Solution()

        print(solObj.countAndSay(n))

        print("~")
# } Driver Code Ends