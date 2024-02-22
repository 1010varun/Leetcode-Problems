class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int count = 0;
        vector<int> sample;
        while(i < nums.size()) {
            if(nums[i] == 0) {
                count++;
            }
            else {
                sample.push_back(nums[i]);
            }
            i++;
        }
        
        while(count--) {
            sample.push_back(0);
        }
        
        for(int i = 0; i < nums.size(); i++){
            nums[i] = sample[i];
        }
    }
};