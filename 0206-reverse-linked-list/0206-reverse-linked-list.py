# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        curr = head
        nxt = head
        
        if(curr == None) :
            return curr
        
        while(nxt != None) :
            nxt = nxt.next
            curr.next = prev
            prev = curr
            curr = nxt
        return prev