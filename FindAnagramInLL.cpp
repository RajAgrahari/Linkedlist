// https://practice.geeksforgeeks.org/problems/de6f6a196aecdfb3e4939ba7729809a5a4bdfe90/1
vector<Node*> findAnagrams(struct Node* head, string s) {
        vector<int> str(26, 0);
        int size = s.length();
        
        for(auto& it : s)   
            str[it - 'a']++;
            
        vector<int> ll(26, 0);
        vector<Node*> res;
        
        int count = 0;

        Node* i = head;
        Node* j = head;
        
        while(j != NULL){
            count++;
            ll[j -> data - 'a']++;
            if(count == size){
                if(ll == str){
                    Node* t = j -> next;
                    j -> next = NULL;
                    res.push_back(i);
                    j = t;
                    i = j;
                    count = 0;
                    for(int x = 0; x < 26; x++)
                        ll[x] = 0;
                }
                else{
                    ll[i ->data - 'a']--;
                    i = i -> next;
                    j = j -> next;
                    count--;
                }
            }
            else
                j = j -> next;
        }
        return res;
    }
