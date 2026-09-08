class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        hasS, hasT = {}, {}
        for i in range(len(s)):
            hasS[s[i]] = 1 + hasS.get(s[i], 0)
            hasT[t[i]] = 1 + hasT.get(t[i], 0)
        
        for c in hasS:
            if hasS[c] != hasT.get(c, 0):
                return False
        return True


        