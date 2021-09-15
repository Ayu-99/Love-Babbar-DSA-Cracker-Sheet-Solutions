def intersetPoint(head1,head2):
    #code here
    a=head1
    b=head2
    while True:
        if a==b:
            return a.data
        if a==None:
            a=head2
        else:
            a=a.next
            
            
        if b==None:
            b=head1
        else:
            b=b.next
    
    return -1
