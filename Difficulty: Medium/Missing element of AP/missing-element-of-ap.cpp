//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int mn = INT_MAX;
        
        for (int i = 1; i < arr.size(); i++) {
            mn = min(mn, arr[i] - arr[i-1]);
        }
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i-1] != mn){
                return arr[i-1] + mn;
            }
        }
        return arr[arr.size()-1] + mn;
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

        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends