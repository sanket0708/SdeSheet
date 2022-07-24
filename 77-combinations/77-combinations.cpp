class Solution {
public:
    
    vector<vector<int>> ans;
    
    void f(int ind,int k,vector<int>&temp,int n)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<=n;i++)
        {
            temp.push_back(i);
            f(i+1,k,temp,n);
            temp.pop_back();
        }
        
     }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>temp;
        f(1,k,temp,n);
        return ans;
        
    }
};