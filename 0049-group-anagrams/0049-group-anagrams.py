class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        freq = {}
        
        for i in strs :
            newWord = ''.join(sorted(i))
            
            if(newWord not in freq) :
                freq[newWord] = []
            
            freq[newWord].append(i)
        
        return freq.values()