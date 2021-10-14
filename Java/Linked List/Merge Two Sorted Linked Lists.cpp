
Node* mergeTwoLLs(Node *head1, Node *head2) {
    
    Node *fh=NULL, *ft=NULL;
    while(head1!=NULL && head2!=NULL){
        
        if(fh== NULL && ft==NULL){
            if(head1->data>head2->data){
                fh=head2;
                ft=head2;
                head2=head2->next;
            }else{
                fh=head1;
                ft=head1;
                head1=head1->next;
            }
        }
        
        if(head1->data<head2->data){
            ft->next=head1;
            ft=ft->next;
            head1=head1->next;
            
        }else{
            ft->next=head2;
            ft=ft->next;
            head2=head2->next;
        }
    }
    
    if(head1!=NULL){
        ft->next=head1;
    }
    if(head2!=NULL){
        ft->next=head2;
    }
    
    return fh;
}
