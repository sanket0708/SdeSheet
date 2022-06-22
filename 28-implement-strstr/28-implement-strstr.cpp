class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size()==0) return 0;
        
        int j = 0;
        
       // string temp = needle[0];
        
        for(int i=0;i<haystack.size();i++)
        {
            int j=0;
            for(;j<needle.size() && (i+j)<haystack.size();j++)
            {
                if(haystack[i+j]==needle[j])
            
                continue;
                
                else break;
                
            }
            
              if(j==needle.size()) return i;

        }
        
      
        return -1;
       
    }
};