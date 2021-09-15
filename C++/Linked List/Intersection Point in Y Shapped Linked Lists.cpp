int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* x = head1, *y = head2;
    while(1){
        
        if(x == y){
            return x->data;
        }
        
        if(x == NULL){
            x = head2;
        }else{
            x = x->next;
        }
        
        
        if(y == NULL){
            y = head1;
        }else{
            y = y->next;
        }
        
        
    }
    return -1;
}
