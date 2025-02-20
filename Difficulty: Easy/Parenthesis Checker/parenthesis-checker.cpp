//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
        vector<char> st;
        string ref = ")]}";
        string open = "([{";
        
        for (char c : s) {
            if (ref.find(c) == string::npos) {
                st.push_back(c);
            }
            else {
                if (st.empty())
                    return false;
                char top = st.back();
                st.pop_back();
                int idx = ref.find(c);
                if (open[idx] != top)
                    return false;
            }
        }
        
        return st.empty();
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends