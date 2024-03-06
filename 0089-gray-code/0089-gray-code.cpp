class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
         int limit = (1<<n);
        
        
        for(int i = 0; i < limit; i++) {
            ans.push_back(i ^ (i/2));
        }
        
        return ans;
    }
};