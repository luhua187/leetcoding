class Solution(object):
    def subsets(self, nums):
    	
    	self.res = []

    	def dfs(nums, temp, i):
    		self.res.append(temp[:])
    		for i in range(i, len(nums)):
    			temp.append(nums[i])
    			dfs(nums, temp, i+1)
    			temp.pop()

    	dfs(nums, [], 0)

    	return self.res

if __name__ == "__main__":
	nums = [1, 2, 3]
	res = Solution.subsets(nums)
	print res