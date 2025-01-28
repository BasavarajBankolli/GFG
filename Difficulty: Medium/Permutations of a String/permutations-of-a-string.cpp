//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<string> findPermutation(string &s) {
        // Code here there
        unordered_set<string> ref;
    
    // Sort the string to ensure lexicographical order
        sort(s.begin(), s.end());
        
        do {
            ref.insert(s); // Add the current permutation
        } while (next_permutation(s.begin(), s.end())); // Generate the next permutation
        
        vector<string> res(ref.begin(), ref.end());
        return res;;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends