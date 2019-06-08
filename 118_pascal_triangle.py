class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        l = []
        for i in range(numRows):
            l.append([1])
            for j in range(1,i+1):
                if j ==i:
                    l[i].append(1)
                else:
                    l[i].append(l[i-1][j]+l[i-1][j-1])
        return l
