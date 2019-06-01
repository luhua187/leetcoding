class Solution(object):
    def numJewelsInStones(self, J, S):
        a = 0
        b = set(J)
        for i in S:
            if i in b:
                a += 1
        return a