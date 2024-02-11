class Solution {
public:
    
    
//  Finding Pivot means searching the smallest element from the two monotonous arrays or to get the starting point
    int findPivot(vector<int> &nums) {
        int start = 0;
        int end = nums.size() - 1;
        
        while(start < end) {
            int mid = start + (end-start)/2 ;
            
            if(nums[mid] >= nums[0]) {
                start = mid + 1;
            }
            else end = mid;
        }
        
        return start;
    }
    
    int binarySearch(vector<int> & nums, int start, int end, int n) {
        while(start <= end) {
            int mid = start + (end-start)/2;
            
            if(nums[mid] == n) {
                return mid;
            }
            
            else if(nums[mid] > n) {
                end = mid - 1;
            }
            
            else start = mid+1;
        }
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        int pivot = findPivot(nums);
        
        int eleIndex = -1;
        
        if(nums[pivot] <= target && target <= nums[nums.size()-1]) {
            eleIndex = binarySearch(nums, pivot, nums.size()-1, target);
        }
        
        else {
            eleIndex = binarySearch(nums, 0, pivot-1, target);
        }
        
        return eleIndex;
    }
};