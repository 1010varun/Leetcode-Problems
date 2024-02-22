class Solution:
    
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        trust_by = [0]*(n+1)
        trust_to = [0]*(n+1)
        
        for i in trust:
            trust_to[i[0]] += 1
            trust_by[i[1]] += 1
        
        ans = -1
        
        for i in range(1, n+1):
            if(trust_by[i] == n-1 and trust_to[i] == 0):
                return i
        
        return ans