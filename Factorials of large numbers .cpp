class Solution 
{
 public:
void multiply(int x, vector<int>&multiplicand) 
{
   int carry = 0;     // Initialize carry to 0
   vector<int>::iterator i;
   for (i=multiplicand.begin(); i!=multiplicand.end(); i++) 
   {   
      int prod = (*i) * x + carry;
      *i = prod % 10;      
      carry  = prod/10;    
   }

   while (carry) 
   {    
      multiplicand.push_back(carry%10);
      carry = carry/10;
   }
}
    vector<int> factorial(int n)
    {
       vector<int> result;
       result.push_back(1);   
       for (int i=2; i<=n; i++)
          multiply(i, result);  
       reverse(result.begin(), result.end());
       return result;
    }
};
