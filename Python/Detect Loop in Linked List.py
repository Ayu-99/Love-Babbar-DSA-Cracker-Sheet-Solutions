class Solution:
    #Function to check if the linked list has a loop.
    def detectLoop(self, head):
        #code here
        slow=head
        fast=head
        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
            if slow==fast:
                return True
                
        
        return False
