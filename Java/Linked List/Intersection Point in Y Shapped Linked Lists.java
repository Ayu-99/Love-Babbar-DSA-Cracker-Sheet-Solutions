class Intersect
{
    //Function to find intersection point in Y shaped Linked Lists.
	int intersectPoint(Node head1, Node head2)
	{
         // code here
         Node x = head1, y = head2;
        while(true){
            
            if(x == y){
                return x.data;
            }
            
            if(x == null){
                x = head2;
            }else{
                x = x.next;
            }
            
            
            if(y == null){
                y = head1;
            }else{
                y = y.next;
            }
            
        }
        
	}
}
