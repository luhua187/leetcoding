class Solution(object):
    def groupAnagrams(self, strs):
        d = {}
        for i in strs:
            k = "".join(sorted(i))
            d.setdefault(k,[]).append(i)
        return list(d.values())
 