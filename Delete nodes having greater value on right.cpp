class Solution
{
    public:
    void reverse(Node* &head)
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* Next;
        while(curr != NULL)
        {
           Next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = Next;
        }
      head = prev;
    }
    Node *compute(Node *head)
    {
       reverse(head);
       int max = -1;
       Node* ans = new Node(-1);
       Node* cur = ans;
       Node* temp = head;
       while(temp != NULL)
       {
           if (temp->data >= max)
           {
               max=temp->data;
               cur->next=new Node(temp->data);
               cur=cur->next;
           }
           temp=temp->next;
       }
       ans=ans->next;
       reverse(ans);
       return ans;
    }
};
