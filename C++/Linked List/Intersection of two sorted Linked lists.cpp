Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* dummy = new Node(1), *current = dummy;
    Node* temp1 = head1, *temp2 = head2;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->data == temp2->data){
            Node* new_node = new Node(temp1->data);
            current->next = new_node;
            current = current->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
            
        }
        else if(temp1->data < temp2->data){
            temp1 = temp1->next;
        }
        else if(temp1->data > temp2->data){
            temp2 = temp2->next;
        }
    }
    return dummy->next;
}
