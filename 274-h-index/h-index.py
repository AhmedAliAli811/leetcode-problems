class Solution:
    def hIndex(self, citations: List[int]) -> int:
        citations = sorted(citations)
        
        for i,cit in enumerate(citations):
            if len(citations) - i <= cit:
                return len(citations) - i
        return 0