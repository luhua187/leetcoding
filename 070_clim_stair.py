class Solution:
    def climbStairs(self, n):
        a, b = 1, 1

        for i in xrange(1, n):
        	a, b = b, a+b
        return b