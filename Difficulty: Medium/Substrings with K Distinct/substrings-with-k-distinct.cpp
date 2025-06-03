class Solution {
  public:
    int atMost(string &s, int k){
        int freq[26] = {0};
        int res = 0;
        int i = 0, distinct = 0;
        
        for (int j = 0; j < s.length(); j++) {
            if (freq[s[j] - 'a'] == 0) distinct++;
            
            freq[s[j]-'a']++;
            
            while(distinct > k){
                freq[s[i]-'a']--;
                if (freq[s[i] - 'a'] == 0) distinct--;
                i++;
            }
            
            res += j - i + 1;
            
        }
        
        return res;
    }
    int countSubstr(string& s, int k) {
        return atMost(s, k) - atMost(s, k-1);
    }
};