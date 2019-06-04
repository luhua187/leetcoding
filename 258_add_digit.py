class Solution(object):
    def addDigits(self, num):
        if num == 0:
            return 0
        n = num%9
        if n==0:
            return 9
        else:
            return n
 