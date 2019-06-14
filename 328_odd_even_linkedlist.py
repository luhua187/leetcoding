class Solution(object):
    def oddEvenList(self, head):
        if head is None:
            return head
        odd = oddhead = head
        even = evenhead = head.next
        
        while even and even.next:
            odd.next = even.next
            odd = odd.next
            even.next = odd.next
            even = even.next
        odd.next=evenhead
        
        return oddhead