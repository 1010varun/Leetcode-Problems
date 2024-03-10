class Solution {
public:
    int myAtoi(string s) {
        bool isNegative = 0;
        long long int ans = 0;
        
        int i = 0;
        while(i < s.length() && s[i] == ' ') {
            i++;
        }
        
        if(s[i] == '-') {
            isNegative = 1;
            i++;
        }
        
        else if(s[i] == '+') {
            i++;
        }
        
        
        while(i < s.length()) {
            int ch = s[i] - '0';
            
            if(ch >= 0 && ch <= 9) {
                ans = (ans*10) + ch;
                if(ans > INT_MAX && isNegative) {
                    return INT_MIN;
                }
                else if(ans > INT_MAX && !isNegative) {
                    return INT_MAX;
                }
            }
            else {
                return isNegative ? ans*-1 : ans;
            }
            i++;
        }
        
        return isNegative ? ans*-1 : ans;
        
    }
};