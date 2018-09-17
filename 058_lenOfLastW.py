class Solution(object):
    def lengthOfLastWord(self, s):
        
        tmp = s.split()

        if not len(tmp):
        	return 0
        else:
        	return len(tmp[-1])

