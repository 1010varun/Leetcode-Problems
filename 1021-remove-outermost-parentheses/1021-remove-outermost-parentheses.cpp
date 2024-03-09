class Solution {
public:
    string removeOuterParentheses(string s) {
        int a = 0;
        string ans = "";
        
        for(char c: s) {
            if(c == '(') {
                if(a > 0) {
                    ans += '(';
                }
                a++;
            }
            else {
                a--;
                if(a > 0) {
                    ans += ')';
                }
            }
        }
        return ans;
    }
};