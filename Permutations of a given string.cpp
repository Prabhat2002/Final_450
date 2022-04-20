		vector<string>find_permutation(string S)
		{
              vector<string>result;  
	          permuteRecursive(S,0,result);
	          sort(result.begin(),result.end());
	          return result;
        }
        void permuteRecursive(string s, int begin, vector<string>&result)	        
        {
		   if(begin==s.size())
		      result.push_back(s);
		   for(int i=begin;i<s.size();i++) 
           {           
		      swap(s[begin],s[i]);
		      permuteRecursive(s,begin+1,result);
		      swap(s[begin],s[i]);
		   }
        }
