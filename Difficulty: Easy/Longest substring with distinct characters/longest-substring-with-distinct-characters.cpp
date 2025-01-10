//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int freq[26] = {};
        int cur = 0, mx = 0;
        
        for (int i = 0, start = 0; i < s.size(); i++) {
            if (!freq[s[i] - 'a']) {
                freq[s[i] - 'a']++;
                cur++;
            } else {
                while (s[start] != s[i]) {
                    freq[s[start] - 'a']--;
                    start++;
                    cur--;
                }
                start++;
            }
            mx = max(mx, cur);
        }
        return mx;

    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends