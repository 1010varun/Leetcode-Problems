class Solution {
public:
    
    bool isPossible(vector<int>& nums, int mid, int k) {
        int count = 1;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            
            if(sum + nums[i] <= mid) {
                sum += nums[i];
            }
            
            else {
                count++;
                sum = nums[i];
                if(count > k || nums[i] > mid) {
                    return false;
                }
            }
        }
        return true;
    }
    
    
    
    
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int sum = 0;
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        
        int e = sum;
        
        while(s <= e) {
            int mid = s + (e-s)/2;
            
            if(isPossible(nums, mid, k)) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        
        return ans;
    }
};