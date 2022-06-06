class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int one = 0 , zero = 0 , two = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) zero++;
            else if(nums[i]==1) one++;
            else two++;
        }
        
        int k=0 , p1=0 , q1=0 , r1=0;
        while(k<nums.size())
        {
            while(p1<zero)
            {
                nums[k] = 0;
                p1++;
                k++;
            }
             while(q1<one)
            {
                nums[k] = 1;
                q1++;
                k++;
            }
             while(r1<two)
            {
                nums[k] = 2;
                r1++;
                k++;
            }
        }
    }
};