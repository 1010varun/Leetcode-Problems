class Solution {
public:
    int maxDepth(string s) {
        int maxi = INT_MIN;
        int ans = 0;
        
        for(char ch: s) {
            if(ch == '(') {
                ans++;
            }
            else if(ch == ')') {
                maxi = (maxi > ans) ? maxi : ans;
                ans--;
            }
        }
        maxi = (maxi > ans) ? maxi : ans;
        return maxi;
    }
};