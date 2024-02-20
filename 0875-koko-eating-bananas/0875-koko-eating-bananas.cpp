class Solution {
public:
    
    bool isPossible (vector<int>& piles, int m, int h) {
        long long int count = 0;
        for(double pile: piles) {
            count += ceil(pile/m);
        }
        return count <= h;
    }
    
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans = -1;
        
        while(s <= e) {
            int mid = s + (e-s)/2;
            
            if(isPossible(piles, mid, h)) {
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