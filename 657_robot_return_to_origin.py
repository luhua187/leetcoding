class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        u=l=d=r=0
        for i in moves:
            if i == 'U':
                u+=1
            elif i == 'D':
                d+=1
            elif i == 'R':
                r+=1
            else:
                l+=1
        if u == d and r == l:
            return True
        else:
            return False