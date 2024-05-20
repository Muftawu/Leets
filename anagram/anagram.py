class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        out = False
        count = 0

        if s == t:
            out = True
        elif len(t) > len(s):
            out = False
        else:
            t = list(t)
            for i in s:
                if i in t:
                    count += 1
                    t.remove(i)
                else:
                    count += 0
        return True if count == len(s) else out
    

