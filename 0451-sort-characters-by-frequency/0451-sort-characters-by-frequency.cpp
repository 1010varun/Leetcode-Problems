class Solution {
public:
    
    typedef pair<char, int> P;
    
    string frequencySort(string s) {
        vector<P> sample(123);
        
        for(char &ch: s) {
            int freq = sample[ch].second;
            sample[ch] = {ch, freq+1};
        }
        
        auto lamda = [&](P &p1, P &p2) {
            return p1.second > p2.second;
        };
        
        sort(begin(sample), end(sample), lamda);
        
        string ans = "";
        
        for(int i = 0; i < 123; i++) {
            if(sample[i].second > 0) {
                char ch = sample[i].first;
                int freq = sample[i].second;
                string temp = string(freq, ch);
                
                ans += temp;
            }
        }
        return ans;
    }
};