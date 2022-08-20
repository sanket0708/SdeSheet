class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
          int ls=0;
        int count = 0;
        int len = nums.size();
        
        map<int,int>m;
        
        m[0] = 1;
        
        for(int i=0;i<len;i++)
        {
            ls+= nums[i];
            count+= m[ls-k];
            m[ls]++;
        }
        
        return count;
    }
};