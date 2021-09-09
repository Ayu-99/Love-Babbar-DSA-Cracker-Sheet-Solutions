class Solution
{
    public:
    
    Node* reverse(Node* head){
        Node* prev = NULL, *next = NULL, *current = head;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
        
        Node* new_head = reverse(head);
        Node* current = new_head, *prev = NULL, *current1 = new_head;
        
        int carry = 0;
        while(current != NULL){
            int sum = 0;
            if(prev == NULL){
                sum = current->data + 1;
            }else{
                sum = current->data + carry;
            }
            
            carry = sum/10;
            current->data = sum%10;
            prev = current;
            current = current->next;
            
        }
        
        if(carry == 1){
            Node* new_node = new Node(1);
            prev->next = new_node;
        }
        return reverse(current1);
    }
};
