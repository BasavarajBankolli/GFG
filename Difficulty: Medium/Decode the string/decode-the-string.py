
class Solution:
    def decodedString(self, s):
        stack = []
        curr_str = ""
        num = 0
    
        for c in s:
            if c.isdigit():
                num = num * 10 + int(c)  
            elif c == '[':
                stack.append((curr_str, num))
                curr_str = ""
                num = 0
            elif c == ']':
                last_str, repeat = stack.pop()
                curr_str = last_str + curr_str * repeat
            else:
                curr_str += c
    
        return curr_str

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()

        ob = Solution()
        print(ob.decodedString(s))
        print("~")

# } Driver Code Ends