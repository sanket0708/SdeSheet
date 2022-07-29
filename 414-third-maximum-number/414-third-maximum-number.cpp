class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        
       sort(nums.begin(),nums.end());
        
       set<int>s;
        
        for(int i=n-1;i>=0;i--)
        {
            s.insert(nums[i]);
            if(s.size()==3)
            {
                break;
            }
        }
        
        if(s.size()<3)
        {
            return *max_element(nums.begin(),nums.end());
        }
        else
        {
            return (*(s.begin()));
        }
        
    }
};