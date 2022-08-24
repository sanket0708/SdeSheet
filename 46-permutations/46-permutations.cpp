class Solution {
public:
    void helper( vector<vector<int>>&ans, vector<int>&ds,vector<int>& nums,int freq[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i] = 1;
                helper(ans,ds,nums,freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
        
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i] = 0;
        helper(ans,ds,nums,freq);
        return ans;
    }
};