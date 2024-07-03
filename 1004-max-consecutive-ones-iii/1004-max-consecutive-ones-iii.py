class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        ans = 0
        left = 0
        window = 0
        for right in range(len(nums)) :
            window += nums[right]
            
            while(window + k < (right - left + 1)) :
                window -= nums[left]
                left += 1
            
            ans = max(ans, right - left + 1)
        return ans