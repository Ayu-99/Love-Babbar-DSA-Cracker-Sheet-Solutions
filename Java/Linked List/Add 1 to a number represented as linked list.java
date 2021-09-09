class Solution
{
    
    public static Node reverse(Node head){
        Node current = head, prev = null, next = null;
        
        while(current != null){
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    
    public static Node addOne(Node head) 
    { 
        //code here.
        Node new_head = reverse(head);
        Node current = new_head, current1 = new_head, prev = null;
        int carry = 0;
        
        while(current != null){
            int sum = 0;
            if(prev == null){
                sum = current.data + 1;
            }else{
                sum = current.data + carry;
            }
            carry = sum/10;
            current.data = sum%10;
            prev = current;
            current = current.next;
            
        }
        if(carry == 1){
            Node new_node = new Node(1);
            prev.next = new_node;
        }
        return reverse(current1);
        
        
    }
}
