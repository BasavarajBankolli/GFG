//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        set <int> s(arr.begin(), arr.end());

        int longest = 1;
        int prev = *s.begin();
        int cnt = 1;
        

        for (auto it = ++s.begin() ; it != s.end(); it++) {
            if (prev + 1 == *it) cnt ++;
            
            else {
                longest = max(longest, cnt);
                cnt = 1;
            }
            
            prev = *it;
        }
        
        longest = max(longest, cnt);
        return longest;
    } 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends