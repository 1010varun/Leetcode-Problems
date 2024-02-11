class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int, int> ans;
        
        for(int i: nums) {
            ans[i]++;
        }
        
        for(auto j: ans) {
            if(j.second >= 2) return j.first;
        }
        
        return -1;
    }
};