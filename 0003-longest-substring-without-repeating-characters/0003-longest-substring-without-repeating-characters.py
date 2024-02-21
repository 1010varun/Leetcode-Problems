class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        arr = []
        ans = 0
        
        if(len(s) == 1):
            return 1
        
        for i in s:
            
            if(i in arr):
                index = arr.index(i)
                # print(index)
                if(ans<len(arr)):
                    ans = len(arr)
                # print(ans)
                # print(arr)
                arr = arr[index+1:]
                # print(arr)
                arr.append(i)
            
            else :
                arr.append(i)
                if(ans<len(arr)):
                    ans = len(arr)
        
        return ans
        