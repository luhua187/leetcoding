# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        if head == None:
            return True
        
        l = []
        while head:
            l.append(head.val)
            head = head.next
        a = len(l)
        i = 0
        while i <= (a/2):
            if l[i] != l[-i-1]:
                return False
            i+=1
        return True