class Solution {
public:
    string longestPalindrome(string s) {
        int length = 0;
        string ans = "";
        
        for(int i = 0; i < s.length(); i++) {
            int l = i;
            int r = i;
            
            while(l >= 0 && r < s.length() && s[l] == s[r]) {
                
                if((r-l+1) > length) {
                    length = r - l + 1;
                    ans = s.substr(l, length);
                }
                l--;
                r++;
            }
            
            l = i;
            r = i+1;
            
            while(l >= 0 && r < s.length() && s[l] == s[r]) {
                if((r-l+1) > length) {
                    length = r - l + 1;
                    ans = s.substr(l, length);
                }
                l--;
                r++;
            }
        }
        
        return ans;
    }
};