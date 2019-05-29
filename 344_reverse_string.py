class Solution(object):
    def reverseString(self, s):
        b = s[::-1]
        for i in range(0,len(s)):
            s[i] = b[i]