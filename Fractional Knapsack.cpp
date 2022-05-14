bool comp(Item a,Item b) 
{
       double r1=(double)a.value/(double)a.weight;
       double r2=(double)b.value/(double)b.weight;
       return r1>=r2;
}
class Solution
{
    public:
    double fractionalKnapsack(int W, Item arr[], int n) 
    {
       sort(arr,arr+n,comp);
       double ans=0;
       for(int i=0;i<n;i++) 
       {
           if(arr[i].weight<=W) 
           {
               W=W-arr[i].weight;
               ans+=arr[i].value;
           }
           else 
           {
                ans+=((double)arr[i].value/(double)arr[i].weight)*W;
                break;
           }
       }
       return ans;
    }
        
};
