class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxi = INT_MIN;
        int i = 0 , j = height.size()-1;
        
        while(i<j)
        {
            int currarea = min(height[i],height[j]) * (j-i);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            
            maxi = max(maxi,currarea);
        }
        
        return maxi;
    }
};