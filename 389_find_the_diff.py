class Solution(object):
    def findTheDifference(self, s, t):
        if s == "":
            return t
        
        l = list(s)
        l.sort()
        p = list(t)
        p.sort()
        
        for i in range(len(l)):
            if p[i] != l[i]:
                return p[i]
        return p[i+1]