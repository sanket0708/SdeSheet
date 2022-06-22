class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1)
        {
            return s;
        }
        
        int max = 1;
        int n = s.length();
        int si=0,ei=0;
        
        for(int i=0;i<n-1;i++)
        {
            int l = i;
            int r = i;
            
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
            int len = r-l-1;
            if(len>max)
            {
                max = len;
                si = l+1;
                ei = r-1;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            int l = i;
            int r = i+1;
            
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
            int len = r-l-1;
            if(len>max)
            {
                max = len;
                si = l+1;
                ei = r-1;
            }
        }
        return s.substr(si,max);
    }
};