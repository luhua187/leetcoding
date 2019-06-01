class Solution(object):
    def sortArrayByParity(self, A):
        a=[]
        b=[]
        for i in A:
            if i%2 == 0:
                a.append(i)
            else:
                b.append(i)
        return a+b