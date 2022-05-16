class Solution 
{
	public:
		string FirstNonRepeating(string A)
		{
	       queue<char>q;
           string ans="";
           unordered_map<char,int>mp;
           for(int i=0;i<A.size();i++)
           {
               mp[A[i]]++;
               if(mp[A[i]]==1)
                  q.push(A[i]);
               while(!q.empty())
               {
                  if(mp[q.front()]==1)
                     break;
                  q.pop();
               }
               ans+=q.empty()?'#':q.front();
           }
         return ans;
     }
};
