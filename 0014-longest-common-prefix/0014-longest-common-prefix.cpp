class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        
        int n = strs.size() - 1;
        string ans = "";
        
        string first = strs[0];
        string last = strs[n];
        
        for(int i = 0; i < min(first.length(), last.length()); i++){
            if(first[i] != last[i]) {
                break;
            }
            ans += first[i];
        }
        
        return ans;
    }
};