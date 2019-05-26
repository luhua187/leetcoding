class Solution(object):
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        sum = 0
        l = len(nums)
        for i in range(l/2):
            sum += min(nums[i*2],nums[i*2+1])
        return sum