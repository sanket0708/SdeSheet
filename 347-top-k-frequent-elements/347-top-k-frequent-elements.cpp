class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
       
        priority_queue<pair<int,int>>pq;
        for(auto[a,b] : mp) pq.push({b,a});
        
        while(k)
        {
           ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        
        return ans;
        
    }
};