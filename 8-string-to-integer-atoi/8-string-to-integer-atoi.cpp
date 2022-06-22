class Solution {
public:
    int myAtoi(string s) {
        
        int ans = 0;
        int pos = 1;
        int i=0;
        int n=s.size();
        
        while( i<n && s[i]==' ')
        {
            i++;
        }
        
        if(s[i]=='-' || s[i]=='+')
        {
           pos = s[i] == '-' ? -1:1;
           i++;
        }
        
       
        while(i<n && (s[i]>='0' && s[i]<='9'))
        {
            
          
             int digit = (s[i]-'0') * pos;
            
     if(pos==1 && (ans>INT_MAX/10 || (ans==INT_MAX/10 && digit>INT_MAX%10))) return INT_MAX; 
     if(pos==-1 &&(ans<INT_MIN/10 || (ans==INT_MIN/10 && digit<INT_MIN%10))) return INT_MIN; 
             ans = ans * 10 + digit;
             i++;
            
        }
        
        return ans;
        
    }
};