class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> all;
        
        for(auto a: s) {
            if((int(a) >= 65 && int(a) <= 90) || (int(a) >= 97 && int(a) <= 122)){
                all.push_back(a);
            }
        }
        
        reverse(all.begin(), all.end());
        
        string ans = s;
        int a = 0;
        
        for(int i = 0; i < s.length(); i++) {
            // cout << s[i] << " " << int(s[i]) << endl;
            if((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122)) {
                ans[i] = all[a];
                // cout << ans[i] << endl;
                a++;
            }
        }
        
        return ans;
    }
};