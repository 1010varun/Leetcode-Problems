# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if(list1 == None and list2 == None) :
            return list1
        
        if(list1 == None) :
            return list2
        
        if(list2 == None) :
            return list1
        
        curr1 = list1
        curr2 = list2
        newCurr = ListNode()
        giveHead = newCurr
        
        while(curr1 != None and curr2 != None) :
            if(curr1.val < curr2.val) :
                newCurr.next = ListNode(curr1.val)
                curr1 = curr1.next
                newCurr = newCurr.next
            
            else :
                newCurr.next = ListNode(curr2.val)
                curr2 = curr2.next
                newCurr = newCurr.next
                
        
        while(curr1 != None) :
            newCurr.next = ListNode(curr1.val)
            curr1 = curr1.next
            newCurr = newCurr.next
            
        while(curr2 != None) :
            newCurr.next = ListNode(curr2.val)
            curr2 = curr2.next
            newCurr = newCurr.next
            
        return giveHead.next
        