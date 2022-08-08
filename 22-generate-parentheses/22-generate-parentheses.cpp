class Solution {
public:
    
    void f(vector<string>&ans,int n,int open,int close,string curr)
    {
        
        if(curr.size()==n*2)
        {
            ans.push_back(curr);
            return;
        }
        
        if(open<n) f(ans,n,open+1,close,curr+"(");
        
        if(close<open) f(ans,n,open,close+1,curr+")");
        
        
        
        
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        f(ans,n,0,0,"");  //initial closing and opening brackets
        return ans;
    }
};