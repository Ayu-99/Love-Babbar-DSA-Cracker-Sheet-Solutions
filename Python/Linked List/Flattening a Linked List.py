
def mergeList(headA,headB):
    fh=None
    ft=None
    while headA!=None and headB!=None:
        if fh==None:
            if headA.data<headB.data:
                fh=headA
                ft=headA
                headA=headA.bottom
            else:
                fh=headB
                ft=headB
                headB=headB.bottom
        else:
            if headA.data<headB.data:
                ft.bottom=headA
                headA=headA.bottom
                ft=ft.bottom
            else:
                ft.bottom=headB
                headB=headB.bottom
                ft=ft.bottom
                
                
    if headA:
        ft.bottom=headA
    if headB:
        ft.bottom=headB
    
    return fh    


def flatten(root):
    #Your code here
    if root==None:
        return None
        
    if root.next==None:
        return root
    return mergeList(root,flatten(root.next)) 
