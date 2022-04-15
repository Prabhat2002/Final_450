  vector <int> commonElements (int A[], int B[], int c[], int n1, int n2, int n3)
        {
            set<int>ans;
            map<int,int>mp1,mp2;
            for(int i=0;i<n1;i++)
                mp1[A[i]]++;
            for(int i=0;i<n2;i++)
                mp2[B[i]]++;
            for(int i=0;i<n3;i++)
            {
                if(mp1.find(c[i])!=mp1.end() && mp2.find(c[i])!=mp2.end())
                   ans.insert(c[i]);
            }
            vector<int>res(ans.begin(),ans.end());
            return res;
        }
