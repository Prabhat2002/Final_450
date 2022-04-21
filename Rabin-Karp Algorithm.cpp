        vector <int> search(string pat, string txt)
        {
             int n=txt.size();
             int j=0;
             vector<int>ans;
             for(int i=0;i<n;i++)
             {
                 if(i-j==pat.size()-1)
                 {
                    if(txt.substr(j,pat.size())==pat)
                         ans.push_back(j+1);
                    j++;                           
                 }
             }
             if(ans.size()==0)
                return {-1};
             return ans;
        }
