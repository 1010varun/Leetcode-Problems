class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int low = 1;
        int high = x;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(mid == (x / mid)) return mid;
            else if((x / mid) > mid) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;
    }
};