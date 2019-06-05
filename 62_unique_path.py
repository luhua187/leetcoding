class Solution(object):
    def uniquePaths(self, m, n):
        l = [[1]*n for i in range(m)]
        
        for i in range(1,m):
            for j in range(1,n):
                l[i][j] = l[i-1][j]+l[i][j-1]
        return l[m-1][n-1]
        