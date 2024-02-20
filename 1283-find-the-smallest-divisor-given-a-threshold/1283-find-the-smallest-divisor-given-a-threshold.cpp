class Solution {
public:
    
    bool isPossible(vector<int>& nums, double m, int threshold) {
        int sum = 0;
        for(int n: nums) {
            sum += ceil(n/m);
        }
        
        return sum <= threshold;
    }
    
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s = 1;
        long long int sum = 0;
        long long int ans = -1;
        
        for(int n: nums) {
            sum += n;
        }
        
        long long int e = sum;
        
        while(s <= e) {
            double mid = s + (e-s)/2;
            
            if(isPossible(nums, mid, threshold)) {
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