// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 1;
        int e = n;
        
        while(s < e) {
            int mid = s + (e-s)/2;
                
            if(isBadVersion(mid) == false) {
                s = mid + 1;
            }
            
            else {
                e = mid;
            }
        }
        
        return s;
    }
};