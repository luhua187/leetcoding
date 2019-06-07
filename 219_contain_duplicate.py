class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        d = {}
        for i in range(len(nums)):
            if nums[i] in d:
                j=d.get(nums[i])
                if (i-j)<=k:
                    return True
            d[nums[i]] = i
        return False