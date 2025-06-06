//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        multiset<int> s;
        vector <double> res;
        
        auto it = s.begin();
        for (int i = 0; i < arr.size(); i++) {
            s.insert(arr[i]);
            
            if (arr[i] >= *it && i % 2 == 0) ++it;
            else if (arr[i] < *it && i % 2 == 1) --it;
                
            if (i % 2 == 0) res.push_back((double)(*it));
            else {
                auto nextIt = next(it);
                res.push_back((*it + *nextIt)/2.0);
            }
        }
            
        return res;
            
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends