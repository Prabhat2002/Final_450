class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        //Atleast one meeting is possible
        int m=1;
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++)
           vec.push_back({end[i],start[i]});
        sort(vec.begin(),vec.end());
        int i=0,j=0;
        while(j<n)
        {
           if(vec[i].first<vec[j].second)
           {
               i=j;
               m++;
           }
           j++;
        }
       return m;
    }
};
