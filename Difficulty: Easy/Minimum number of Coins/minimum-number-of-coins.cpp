class Solution {
  public:
    int findMin(int n) {
        int res = n / 10;
        n = n % 10;
        
        res += (n / 5);
        n = n % 5;
        
        res += (n / 2);
        n = n % 2;
        
        res += n;
        
        return res;
        
    }
};