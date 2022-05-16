class Solution
{
 public:
    Node* divide(int N, Node *head)
    {
       vector<int>vec;
       Node* even=head,*odd=head;
       while(even!=NULL)
       {
           if(even->data%2==0)
              vec.push_back(even->data);
           even=even->next;
       }
       while(odd!=NULL)
       {
           if(odd->data%2==1)
              vec.push_back(odd->data);
           odd=odd->next;
       }
       Node* ans=new Node(vec[0]);
       Node* cur=ans;
       for(int i=1;i<vec.size();i++)
       {
           cur->next=new Node(vec[i]);
           cur=cur->next;
       }
       return ans;
    }
};
