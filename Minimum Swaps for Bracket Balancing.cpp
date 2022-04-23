   int minimumNumberOfSwaps(string s)
    {
        int k=0,count=0;
        for(int i=0;i<s.length();i++){
          if(s[i]=='[' ){
              if(k>=0) k++;
              else{
                count=count+(-1*k);
                k++;
              }
          }
          else if(s[i]==']') 
             k--;
        }
        return count;
    }
