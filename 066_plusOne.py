class Solution(object):
    def plusOne(self, digits):
        sum = 0

        for i in range(len(digits)):
        	sum = sum*10 + digits[i]
        return [int(i) for i in str(sum+1)]
