class Solution {
public:
    string convert(string s, int numRows) {
        
          vector<string> str(numRows); 
        
        int cnt = 0, idx = 0, n = s.length();
        
        while(cnt < n)
        {
            for(int i = 0; i < numRows && cnt < n; i++) //vertical top to bottom
            {
                ++cnt;
                str[i] += s[idx++];
            }
            
            for(int i = numRows - 2; i >= 1 && cnt < n; i--) //diagonal from bottom to up
            {
                ++cnt;
                str[i] += s[idx++];
            }
        }
        
        string ans; // final answer
        for(auto& v : str)
        {
            ans += v;
        }
        return ans;
    }
};