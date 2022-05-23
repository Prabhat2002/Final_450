class Solution
{
 public:
    int minimumDays(int sur, int n, int roz)
    {
        int week=sur/7;
        double daily=n;
        if(daily*(sur-week)>=roz*sur)
        {
            double day=roz*sur/daily;
            return ceil(day);
        }
        return -1;
    }
};
