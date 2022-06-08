class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>>store;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int newtarget = target - nums[i] - nums[j];
                
                int x = j+1;
                int y = n-1;
                
                while(x<y)
                {
                    if(nums[x] + nums[y] > newtarget)
                    {
                        y--;
                    }
                    else if(nums[x] + nums[y] < newtarget)
                    {
                        x++;
                    }
                    else
                    {
                        store.insert({nums[i],nums[j],nums[x],nums[y]});
                        x++;
                        y--;
                    }
                }
            }
            
          }
        
        for(auto i:store)
            
        {
           ans.push_back(i);
        }
        return ans;
        
        
    }
};