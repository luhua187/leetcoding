class Solution(object):
    def singleNumber(self, nums):
        d = {}
        for i in nums:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1
            if d[i] == 3:
                d.pop(i)
            
        key=d.keys()
        return key[0]
        