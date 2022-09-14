class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        int ans;
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                mp[nums[i]]++;
            }
        }
        
        if(mp.empty())
        {
            return -1;
        }
        else
        {
            int maxi = INT_MIN;
            
            for(auto x:mp)
            {
                if(x.second > maxi)
                {
                    maxi = x.second;
                    ans = x.first;
                }
            }
            
            return ans;
        }
        
    }
};