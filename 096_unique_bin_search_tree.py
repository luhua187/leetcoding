class Solution(object):
    def a1(self, n):
        """
        :type n: int
        :rtype: int
        """
        dp = 1
        for i in range(n+1,n*2+1):
            dp = dp * i / (i - n)
        return dp/(n+1)
    
    def numTrees(self, n):
        dp = [1,1]
        for i in range(2,n+1):
            a = 0
            for j in range(1, i+1):
                a = a + dp[j-1]*dp[i-j]
            dp.append(a)
        return dp[n]