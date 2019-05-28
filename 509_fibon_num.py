class Solution(object):
    def fib(self, N):
        if N <= 1:
            return N;
        a = 0
        b = 1
        for i in range(1, N):
            sum = a + b
            a = b
            b = sum
        return sum