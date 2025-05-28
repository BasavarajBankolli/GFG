class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        
        vector<pair<int,int>> p;
        
        for(int i = 0; i < mat.size(); i++) {
            for(int j = i+1; j < mat.size(); j++) {
                int cnt = 0;
                
                for (int k = 0; k < mat[0].size(); k++) {
                    if (mat[i][k] && mat[j][k]) cnt++;
                    
                    if (cnt > 1) return true;
                }
                
            }
             
        }   
        return false;
        
        
    }
};