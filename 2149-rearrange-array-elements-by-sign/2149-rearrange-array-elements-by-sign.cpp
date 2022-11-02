class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        int n = nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                neg.push_back(nums[i]);
            }
            else
            {
                pos.push_back(nums[i]);
            }
        }
        
        int i=0,j=0;
        int flag = 1;
        while(i<n/2 && j<n/2)
        {
            if(flag==1)
            {
                ans.push_back(pos[i]);
                i++;
                flag = 0;
            }
            else
            {
                ans.push_back(neg[j]);
                j++;
                flag = 1;
            }
        }
        
        while(j<n/2)
        {
            ans.push_back(neg[j]);
            j++;
        }
        
       return ans; 
        
    }
};