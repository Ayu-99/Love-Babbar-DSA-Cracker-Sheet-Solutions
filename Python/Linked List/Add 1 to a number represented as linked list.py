def reverse(head):
    current=head
    prev=None
    next=None
    while current!=None:
        next=current.next
        current.next=prev
        prev=current
        current=next
    return prev    

class Solution:
    def addOne(self,head):
        current1=reverse(head)
        current=current1
        carry=0
        prev=None
        while current!=None:
            if prev==None:
                sum=current.data+carry+1
            else:
                sum=current.data+carry
            carry=sum//10
            current.data=sum%10
            prev=current
            current=current.next
            
            
        if carry==1:
            new_node=Node(1)
            prev.next=new_node
        return reverse(current1) 
