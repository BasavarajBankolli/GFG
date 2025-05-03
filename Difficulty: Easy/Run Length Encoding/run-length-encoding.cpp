//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string encode(string s) {
        // code here
        int cnt = 1;
        string res = "";
        char prev = s[0];
        
        for(int i = 1; i < s.size(); i++) {
            if (prev == s[i]) cnt++;
            else{
                res += prev + to_string(cnt);
                cnt = 1;
                prev = s[i];
            }
        }
        
        res += prev + to_string(cnt);
        
        return res;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        string s;
        getline(cin,s);
        
        Solution obj;
        string res = obj.encode(s);
        
        cout<<res<<"\n";
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends