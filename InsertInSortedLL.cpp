Node *sortedInsert(struct Node* head, int data) 
    {
        Node* n = new Node(data);
        if(head==NULL || head->data > data)
        {
            if(head == NULL)
            head = n;
            else{
                n->next = head;
                head = n;
            }
        }
        else{
            Node* cur = head;
            Node* pre = NULL;
            while(cur)
            {
                if(cur->data > data)
                break;
                pre = cur;
                cur = cur->next;
            }
            if(cur==NULL)
            {
                pre->next = n;
            }
            else{
                pre->next = n;
                n->next = cur;
            }
        }
        return head;
    }
