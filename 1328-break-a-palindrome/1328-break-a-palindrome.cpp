class Solution {
public:
    string breakPalindrome(string s) {
        
        int n = s.size();
       // string ans = "";
        // int i = 0;
        
        if(n==1)
        {
            return "";
        }
        int i=0,j=n-1;
        
        while(i<j)
        {
            if(s[i]>'a')
            {
                s[i] = 'a';
                return s;
            }
            else
            {
                i++;
                j--;
            }
        }
        
        s[n-1] = 'b';
        return s;
        
    }
};