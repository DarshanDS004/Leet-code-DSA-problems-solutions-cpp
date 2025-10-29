class Solution {
public:
  string decimal_to_binary(int n)
  {
    string res="";
    if(n==0)
    return "0";
    while(n!=0)
    {
        int r=n%2;
        res=to_string(r)+res;
        n=n/2;

    }
    return res;
  }

  bool is_set_bit(string &s)
  {
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]!='1')
        return false;
    }
    return true;
  }

    int smallestNumber(int n) {
        string res=decimal_to_binary(n);
       // bool found=true;
        int num=n;
        while(true)
        {
            string res=decimal_to_binary(num);
            if( is_set_bit(res))
            {
               return num;
            }
            
            num++;
          

        }
        return num;
        
        
    }
};