#include<bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0) return 0;
      //  int count = 0;
        sort(nums.begin(),nums.end());
        
        int longest = 1;
        int prev = nums[0];
        int counter = 1;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] == prev + 1)
            {
                counter++;
            }
            else if(nums[i]!=prev)
            {
                counter = 1;
            }
            
            prev = nums[i];
            longest = max(longest,counter);
        }
        
        return longest;
        
    }
};