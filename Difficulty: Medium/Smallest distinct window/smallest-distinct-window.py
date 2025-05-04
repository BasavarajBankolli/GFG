#User function Template for python3

class Solution:
    def findSubString(self, s):
        a = [0] * 26
    
        for c in s:
            a[ord(c) - ord('a')] += 1
    
        cnt = 0
        for i in range(26):
            if a[i]:
                cnt += 1
    
        mn = len(s)
        tmp = 0
        j = 0
        freq = [0] * 26
    
        for i in range(len(s)):
            idx = ord(s[i]) - ord('a')
            if freq[idx] == 0:
                tmp += 1
            freq[idx] += 1
    
            while tmp == cnt and j <= i:
                mn = min(mn, i - j + 1)
                freq[ord(s[j]) - ord('a')] -= 1
                if freq[ord(s[j]) - ord('a')] == 0:
                    tmp -= 1
                j += 1
    
        return mn



    
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():
    T = int(input())
    while (T > 0):
        str = input()
        ob = Solution()
        print(ob.findSubString(str))

        T -= 1
        print("~")


if __name__ == "__main__":
    main()

# } Driver Code Ends