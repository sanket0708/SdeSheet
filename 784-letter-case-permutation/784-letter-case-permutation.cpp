class Solution {
public:
    
    vector<string>ans;
    int count = 1;
    
    void add(char n,int pos)
    {
        int i=0;
        while(i<count)
        {
            string x = ans[i];
            x[pos] = n;
            ans.push_back(x);
            i++;
        }
        
        count += count;
    }
    
    
    vector<string> letterCasePermutation(string s) {
        
        transform(s.begin(),s.end(),s.begin(), :: tolower);
        ans.push_back(s);
        
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                add(toupper(s[i]),i);
            }
        }
        
        return ans;
        
    }
};