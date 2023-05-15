//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode* n = head;
        ListNode* t = head;
        int l = 0;
        while(t)
        {
            l++;
            t = t->next;
        }
        int from_end = l-k;
        int from_start = k-1;
        ListNode* from_start_node = NULL,*from_end_node=NULL;
        while(n && (from_start>=0 || from_end>=0))
        {
           if(from_start==0)
           from_start_node = n;
           if(from_end==0)
           from_end_node = n;

           from_start--;
           from_end--;
           n = n->next;
        }
        
        int temp = from_start_node->val;
        from_start_node->val = from_end_node->val;
        from_end_node->val = temp;
        return head; 
    }
