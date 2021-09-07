class Solution
{
    public:
    void removeLoop(Node* head)
    {
        if (head == NULL || head->next == NULL)
        return;
  
        Node *slow = head, *fast = head;
      
        slow = slow->next;
        fast = fast->next->next;
      
        while (fast && fast->next) {
            if (slow == fast)
                break;
            slow = slow->next;
            fast = fast->next->next;
        }
      
        if (slow == fast) 
        {
            slow = head;
                
            if(slow == fast) {
                  while(fast->next != slow) fast = fast->next;
            }
            else {
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
      
            fast->next = NULL; 
        }

    }
};
