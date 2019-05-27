class Solution(object):
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        b = 0
        a = x^y
        while a:
            b+=1
            a&=(a-1)
        return b