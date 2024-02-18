class Solution {
public:
    
    bool isPossible(vector<int> &weights, int mid, int s, int e, int d) {
        int count = 1;
        int sum = 0;
        for(int i = 0; i < weights.size(); i++) {
            
            if(sum + weights[i] <= mid) {
                sum += weights[i];
            }
            
            else {
                count++;
                sum = weights[i];
                if(count > d || weights[i] > mid) {
                    return false;
                }
            }
        }
        return true;
    }
    
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int sum = 0;
        int ans = -1;
        for(int i = 0; i < weights.size(); i++) {
            sum += weights[i];
        }
        
        int e = sum;
        
        while(s <= e) {
            int mid = s + (e-s)/2;
            if(isPossible(weights, mid, s, e, days)) {
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