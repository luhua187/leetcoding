class Solution(object):
    def reverseStr(self, s, k):
        if not s:
            return s
        a = ''
        for i in range(0, len(s), 2*k):
            a += s[i:i+k][::-1]
            a += s[i+k:i+2*k]
        return a