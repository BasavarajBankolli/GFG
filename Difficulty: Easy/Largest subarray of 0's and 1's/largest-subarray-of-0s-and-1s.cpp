//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxLen(vector <int> &arr){
        int n = arr.size();
        int ans = 0;
        int ind = 0;
        int psum =0;
        unordered_map<int,int> mp;
        // Your code here
        for(int i=0;i<n;i++){
            psum += arr[i] ? 1 : -1;
            if(psum == 0){
                ind = i+1;
            }
            if(mp.find(psum)!=mp.end()){
                ind = max(ind, i - mp[psum] );
                
            }
            if(mp.find(psum)==mp.end()){
                mp[psum] = i;
            }
            
        }
        return ind;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line); // Read the whole line for the array

        // Convert the line into an array of integers
        stringstream ss(line);
        vector<int> a;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }

        // Create the solution object
        Solution obj;

        // Call the maxLen function and print the result
        cout << obj.maxLen(a) << endl;
    }

    return 0;
}
// } Driver Code Ends