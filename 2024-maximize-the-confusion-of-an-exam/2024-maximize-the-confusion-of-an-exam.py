class Solution:
    
    def solve(self, ans, k, ch) :
        # print(len(ans), k, ch)
        l = 0
        an = 0
        wind = 0
        mp = {}
        if(ch == 'F') :   
            mp = {'T': 0, 'F': 1}
        else :
            mp = {'T': 1, 'F': 0}
        
        for r in range(len(ans)) :
            wind += mp[ans[r]]
            while(wind + k < (r - l + 1)) :
                wind -= mp[ans[l]]
                l += 1
            an = max(an, (r - l + 1))
        return an
    
    def maxConsecutiveAnswers(self, ans: str, k: int) -> int:
        # ans1 = self.solve(ans, k, 'T')
        # print(ans1)
        # return 1
        return (max(self.solve(ans, k, 'T'), self.solve(ans, k, 'F')))