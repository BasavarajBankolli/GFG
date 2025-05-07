//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int atMostK(string& s, int k) {
        int a[26] = {0};
        int res = 0, n = s.size();
        int cnt = 0;
        for (int i = 0, j = 0; i < n; i++) {
            if (a[s[i] - 'a']++ == 0) cnt++;
            
            while (cnt > k) {
                if (--a[s[j] - 'a'] == 0) cnt--;
                j++;
            }
            
            res += (i - j + 1);
        }
        return res;
    }
    
    int countSubstr(string& s, int k) {
        return atMostK(s, k) - atMostK(s, k - 1);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends