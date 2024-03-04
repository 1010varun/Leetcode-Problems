class Solution {
public:
    string largestOddNumber(string num) {
        int ind = -1;
        string ans = "";
        
        for(int i = num.length() - 1; i >= 0; i--) {
            if((int)num[i] % 2 != 0) {
                ind = i;
                break;
            }
        }
        
        if(ind != -1) {
            for(int i = 0; i <= ind; i++) {
                ans += num[i];
            }
        }
        
        return ans;
    }
};