 vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
       vector<long long>ans(n);
       stack<long long>st;
       for(int i=n-1;i>=0;i--)
       {
           while(!st.empty() && st.top()<arr[i])
              st.pop();
           ans[i]=st.empty()?-1:st.top(); 
           st.push(arr[i]);
       }
       return ans;
    }

 vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
       vector<long long>ans(n);
       stack<long long>st;
       for(int i=n-1;i>=0;i--)
       {
           if(st.empty())
              ans[i]=-1;
           else if(!st.empty() && st.top()>arr[i])
              ans[i]=st.top();
           else if(!st.empty() && st.top()<=arr[i])
            {
                while(!st.empty() && st.top()<arr[i])
                    st.pop();
                if(st.empty())
                    ans[i]=-1;
                else
                    ans[i]=st.top();
            }
            st.push(arr[i]);
       }
       return ans;
    }
