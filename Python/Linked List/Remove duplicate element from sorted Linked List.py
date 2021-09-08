def removeDuplicates(head):
    #code here
    current=head
    while current.next!=None:
        if current.data==current.next.data:
            current.next=current.next.next
        
        else:
            current=current.next
        # current=current.next
