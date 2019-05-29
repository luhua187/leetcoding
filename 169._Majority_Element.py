class Solution(object):
    def majorityElement(self, nums):
	    d = {}
	    for i in nums:
		    if i not in d:
			    d[i] = 1
		    else:
			    d[i] += 1
	    a = b = 0		
	    for key in d.keys():
		    if d[key] >= b:
			    b = d[key]
			    a = key
	    return a
        
