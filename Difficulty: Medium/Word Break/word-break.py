class Solution:
    def wordBreak(self, s, words):
        dp = [True] + [False] * len(s)

        for i in range(1, len(s) + 1):
            for w in words:
                start = i - len(w)
                if start >= 0 and dp[start] and s[start:i] == w:
                    dp[i] = True
                    break
        
        return dp[-1]

#{ 
 # Driver Code Starts
if __name__ == '__main__':
    test_case = int(input())

    for _ in range(test_case):
        s = input().strip()
        dictionary = input().strip().split()
        ob = Solution()
        res = ob.wordBreak(s, dictionary)
        if res:
            print("true")
        else:
            print("false")
        print("~")
# } Driver Code Ends