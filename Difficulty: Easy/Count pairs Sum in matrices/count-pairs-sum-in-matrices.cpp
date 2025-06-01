class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        unordered_map<int, int> mp;
        int res = 0;
        for(auto &row: mat1){
            for(int val: row) {
                mp[val]++;
            }
        }
        for(auto &row: mat2){
            for(int val: row) {
               int rem = x - val;
               
               if (mp.find(rem) != mp.end()){
                   res += mp[rem];
               }
            }
        }
        
        return res;
    }
};