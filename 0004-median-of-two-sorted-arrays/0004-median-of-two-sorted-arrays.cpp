class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int> ans;
        
        int i = 0;
        int j = 0;
        
        while(i < n && j < m) {
            if(nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i < n) {
            ans.push_back(nums1[i]);
            i++;
        }
        
        
        while(j < m) {
            ans.push_back(nums2[j]);
            j++;
        }
        
        if((m+n)%2 != 0) {
            return ans[(m+n)/2];
        }
        else {
            int mid1 = ans[((m+n)/2)-1];
            int mid2 = ans[((m+n)/2)];
            
            return (mid1+mid2)/2.0;
        }
        
        return 0;
    }
};