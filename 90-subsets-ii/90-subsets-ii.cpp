class Solution {
public:
    void helper(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind && nums[i]==nums[i-1]) continue;
            //dont do this if duplicates because we cant store it in ans 
            ds.push_back(nums[i]);
            helper(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        helper(0,nums,ds,ans);
        return ans;
        
    }
};