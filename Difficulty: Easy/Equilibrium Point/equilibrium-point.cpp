//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


using ll = long long; 
class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        const int sz = arr.size();
        
        ll total = 0;
        for (int& num : arr) {
            total += num;
        }
    
        ll leftSum = 0; 
        for (int i = 0; i < sz; i++) {
            ll rightSum = total - leftSum - arr[i];
    
            if (leftSum == rightSum) {
                return i; 
            }
    
            leftSum += arr[i];
        }
    
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends