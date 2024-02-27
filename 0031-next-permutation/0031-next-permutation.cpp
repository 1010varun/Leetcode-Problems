class Solution {
public:
    
    int breakpoint(vector<int>& nums) {
        int ans = -1;
        
        for (int i = nums.size() - 2; i >= 0; i--) {
            if(nums[i+1] > nums[i]) {
                ans = i;
                break;
            }
        }
        return ans;
    }
    
    void nextPermutation(vector<int>& nums) {
        int breakPoint = breakpoint(nums);
        
        if(breakPoint == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        else {
            for(int i = nums.size() - 1; i > breakPoint; i--) {
                if(nums[i] > nums[breakPoint]) {
                    swap(nums[i], nums[breakPoint]);
                    break;
                }
            }
            
            reverse(nums.begin() + breakPoint + 1, nums.end());
            
            return;
        }
    }
};