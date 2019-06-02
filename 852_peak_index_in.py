class Solution(object):
    def peakIndexInMountainArray(self, A):
        for i in range(len(A) - 1):
            if A[i+1] < A[i]:
                return i
        return -1