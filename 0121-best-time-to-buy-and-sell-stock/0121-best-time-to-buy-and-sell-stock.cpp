class Solution {
public:
    int maxProfit(vector<int>& prizes) {
        int ans = 0;
        int min = INT_MAX;
        
        for(int i = 0; i < prizes.size(); i++) {
            if(min > prizes[i]) 
                min = prizes[i];
            if(prizes[i] - min > ans) 
                ans = prizes[i] - min;
        }
        return ans;
    }
};