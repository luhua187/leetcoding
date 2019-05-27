class Solution(object):
    def findComplement(self, num):
        tmp = num
        a = 1
        while tmp:
            a <<=1
            tmp >>=1
        return num^(a-1)