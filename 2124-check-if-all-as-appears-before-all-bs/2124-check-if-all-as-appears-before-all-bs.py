class Solution:
    def checkString(self, s: str) -> bool:
        seenB=False
        for i in range(len(s)):
            if s[i]=='b':
                seenB=True
            elif seenB:
                return False
        return True

        