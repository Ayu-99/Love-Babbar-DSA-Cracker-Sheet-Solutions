def findIntersection(head1,head2):
    #return head
    dummy=Node(0)
    tail=dummy
    a=head1
    b=head2
    while a!=None and b!=None:
        if a.data==b.data:
            new_node=Node(a.data)
            tail.next=new_node
            tail=tail.next
            a=a.next
            b=b.next
        elif a.data<b.data:
            a=a.next
        else:
            b=b.next
    
    return dummy.next   
