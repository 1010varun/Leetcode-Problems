class Solution {
public:

    int firstOccurance(vector<int> &arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while(start <= end) {
            int mid = start + (end-start) / 2;

            if(arr[mid] == target) {
                ans = mid;
                end = mid - 1 ;                
            } 
            else if(arr[mid] > target) end = mid - 1; 
            else start = mid + 1;
        }
        return ans ;
    }

    int lastOccurance(vector<int> &arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while(start <= end) {
            int mid = start + (end-start) / 2;

            if(arr[mid] == target) {
                ans = mid;
                start = mid + 1 ;
            }
            else if(arr[mid] > target) end = mid - 1;
            else start = mid + 1;
        }
        return ans ;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ans = {firstOccurance(nums, target), lastOccurance(nums, target)};
        return ans;
    }   
};