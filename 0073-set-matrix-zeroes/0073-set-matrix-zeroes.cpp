class Solution {
public:
    
    bool isZeroPresent(vector<int> & nums) {
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                return true;
            }
        }
        
        return false;
    }
    
    
    
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> s;
        
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                if(matrix[i][j] == 0) {
                    s.insert(j);
                }
            }
        }
        
        for(int i = 0; i < matrix.size(); i++) {
            bool isZero = isZeroPresent(matrix[i]);
            
            if(isZero) {
                for(int j = 0; j < matrix[i].size(); j++) {
                    matrix[i][j] = 0;
                }
            }
            
            else {
                for(auto j: s) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        
    }
};