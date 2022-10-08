class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int ans = 0;
       // bool flag = false;
        for(int i=1;i<colors.size();i++)
        {
            if(colors[i]==colors[i-1])
            {
                //flag = true;
                ans += min(neededTime[i],neededTime[i-1]);
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
        }
        
        //if(flag==false) return 0;
        return ans;
    }
};