void reverse(Node *&head)
    {
        Node* current = head;
        Node *prev = NULL, *next = NULL;
        while (current != NULL) 
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    int getNthFromLast(Node *head, int n)
    {
       reverse(head);
       Node* temp=head;
       int i=0;
       while(i<n-1 && temp!=NULL)
       {
          temp=temp->next;
          i++;
       }
       if(temp==NULL)
          return -1;
       return temp->data;
    }
