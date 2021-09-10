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
    
def length(head):
    count=0
    current=head
    while current!=None:
        count+=1
        current=current.next
    return count
    
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, first, second):
        if length(first)<length(second):
            first,second=second,first
            
        f=reverse(first)
        f1=f
        s=reverse(second)
        s1=s
        carry=0
        prev=None
        while f1!=None or s1!=None:
            if f1==None:
                fd=0
            else:
                fd=f1.data
            
            if s1 == None:
                sd=0
            else:
                sd=s1.data
            
            sum=fd+sd+carry
            carry=sum//10
            f1.data=sum%10
            prev=f1
            f1=f1.next
            if s1!=None:
                s1=s1.next
        
        if carry==1:
            new_node=Node(1)
            prev.next=new_node
        
        return reverse(f)
        
