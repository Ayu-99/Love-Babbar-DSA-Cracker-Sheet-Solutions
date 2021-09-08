class Solution:
    #Function to remove duplicates from unsorted linked list.
    def removeDuplicates(self, head):
        # code here
        # return head after editing list
        d={}
        current=head
        prev=None
        while current!=None:
            if current.data in d:
                # print(current.data,d)
                prev.next=current.next
                current=current.next
            else:
                d[current.data]=1
                prev=current
                current=current.next
        return head

