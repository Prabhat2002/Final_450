long long minCost(long long arr[], long long n) 
    {
       priority_queue<long,vector<long>,greater<long>>q;
       for(int i=0;i<n;i++)
           q.push(arr[i]);
       long long cost=0;
       while(q.size()>=2)
       {
           long long a=q.top();
           q.pop();
           long long b=q.top();
           q.pop();
           cost=cost+a+b;
           q.push(a+b);
       }
       return cost;
    }
