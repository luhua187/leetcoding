class Solution(object):
    def reverseWords(self, s):
        s_list = s.split(' ')
        result = []
        for word in s_list:
            re_word = word[::-1]
            result.append(re_word)
        return " ".join(result)