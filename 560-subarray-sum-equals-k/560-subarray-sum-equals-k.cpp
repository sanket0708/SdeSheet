class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        map<int,int>mp;
        mp[0] = 1;
        int count = 0;
        int ls = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            ls += nums[i];
            count += mp[ls-k];
            mp[ls]++;
        }
        
        return count;
    }
};