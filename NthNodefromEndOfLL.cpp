//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
int getNthFromLast(Node *head, int n)
{
      int l = 0;
      Node* temp = head;
      while(temp)
      {
          temp = temp->next;
          l++;
      }
      if(n>l)
      return -1;
      l = l-n;
      Node* cur = head;
      while(cur && l)
      {
          l--;
          cur = cur->next;
      }
      return cur->data;
}
