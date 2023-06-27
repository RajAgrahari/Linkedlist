//https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/
struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        typedef struct Node* node; // previous submission it is not used 
        set<int>s;
        node h1 =head1;
        node h2 =head2;
        while(h1 != NULL || h2 != NULL){
            if(h1 != NULL){
                s.insert(h1->data);
                h1 = h1 -> next;
            }
            if(h2 != NULL){
                s.insert(h2->data);
                h2 = h2->next;
                
            }
        }
        // sort(s.begin() , s.end());
        node head = NULL;
        node curr = NULL;
        
        auto it = s.begin();
        
        while(it != s.end())
        {
            
            node create = new Node(*it);
            
            if(head == NULL){
                head = create;
                curr = head;
            }
            else{
                curr->next = create;
                curr = curr->next;
            }
            create->next = NULL; // previous submission it is not used
            it++;
        }
        return head;
    }
