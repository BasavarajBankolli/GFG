//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        // code here
        const int n = pat.size();
        vector<int> lps(n, 0);  // LPS array
        int prev = 0, idx = 1;
    
        // Construct LPS array
        while (idx < n) {
            if (pat[idx] == pat[prev]) {
                lps[idx] = prev + 1;
                idx++, prev++;
            } else if (prev == 0) {
                idx++;
            } else {
                prev = lps[prev - 1];
            }
        }
    
        int i = 0, j = 0;
        vector<int> res;
    
        while (i < txt.size()) {
            if (pat[j] == txt[i]) {
                i++, j++;
            } else {
                if (j == 0) {
                    i++;
                } else {
                    j = lps[j - 1];
                }
            }
    
            if (j == n) {
                res.push_back(i - n);
                j = lps[j - 1]; 
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends