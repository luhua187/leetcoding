class Solution:
    def findWords(self, words):
        ans=[]
        keyset=['qwertyuiop','asdfghjkl','zxcvbnm']
        key0 = set(keyset[0])
        key1 = set(keyset[1])
        key2 = set(keyset[2])       
        for word in words:
            line=set(word.lower())
            if line.issubset(key0) or line.issubset(key1) or line.issubset(key2):
                    ans.append(word)
        return ans