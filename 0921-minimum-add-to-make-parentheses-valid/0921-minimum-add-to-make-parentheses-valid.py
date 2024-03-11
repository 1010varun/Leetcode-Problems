class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        lst = []
        
        for i in s :
            if(len(lst) == 0) :
                lst.append(i)
            elif (i == ')' and lst[-1] == '(') :
                lst.pop()
            else :
                lst.append(i)
                
        return len(lst)