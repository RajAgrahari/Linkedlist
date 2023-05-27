//https://practice.geeksforgeeks.org/problems/modify-linked-list-1-0546/1
struct Node* modifyTheList(struct Node *head)
    {
        struct Node* slow=head,*fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        struct Node* n = slow;
        struct Node* prev = NULL;
        while(n)
        {
            struct Node* next = n->next;
            n->next = prev;
            prev = n;
            n = next;
        }
        struct Node* start = head, *end = prev;
        while(start && end && start!=end)
        {
            int temp = start->data;
            start->data = end->data - temp;
            end->data = temp;
            start = start->next;
            end = end->next;
        }
        n = prev;
        prev = NULL;
        while(n)
        {
            struct Node* next = n->next;
            n->next = prev;
            prev = n;
            n = next;
        }
        return head;
        
        
     }
