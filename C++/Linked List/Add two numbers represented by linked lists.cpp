class Solution
{
    public:
    
    struct Node* reverse(struct Node* head){
        struct Node* current = head, *prev = NULL, *next = NULL;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    
    int length(struct Node* head){
        int count = 0;
        struct Node* current = head;
        while(current != NULL){
            count++;
            current = current->next;
        }
        return count;
    }
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        if(length(first) < length(second)){
            struct Node* temp = first;
            first = second;
            second = temp;
        }
        
        struct Node* f = reverse(first);
        struct Node* f1 = f;
        struct Node* s = reverse(second);
        struct Node* s1 = s;
        struct Node* prev = NULL;
        int carry = 0;
        while(f1 != NULL or s1 != NULL){
            int fd = 0, sd = 0;
            if(f1 == NULL){
                fd = 0;
            }else{
                fd = f1->data;
            }
            
            if(s1 == NULL){
                sd = 0;
            }else{
                sd = s1->data;
            }
            int sum = fd + sd + carry;
            carry = sum/10;
            f1->data = sum%10;
            prev = f1;
            f1 = f1->next;
            if(s1 != NULL){
                s1 = s1->next;
            }
            
        }
        
        if(carry == 1){
            struct Node* new_node = new Node(1);
            prev->next = new_node;
        }
        
        return reverse(f);
    }
};
