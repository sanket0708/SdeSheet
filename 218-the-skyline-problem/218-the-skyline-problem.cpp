class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        
        int n = buildings.size();
        vector<vector<int>>arr;
        
        for(int i=0;i<n;i++)
        {
            int left = buildings[i][0];
            int right = buildings[i][1];
            int height = buildings[i][2];
            
            arr.push_back({left,-height});
            arr.push_back({right,height});
        }
        
        sort(arr.begin(),arr.end());
        
        vector<vector<int>>res;
        int curr = 0;
        
        multiset<int,greater<int>>s;
        s.insert(0);
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i][1]<0)
            {
                s.insert(-arr[i][1]);
            }
            else if(arr[i][1]>=0)
            {
                auto it = s.find(arr[i][1]);
                if(it!=s.end())
                {
                    s.erase(it);
                }
            }
            
            if(curr!=*s.begin())
            {
                res.push_back({arr[i][0],*s.begin()});
                curr = *s.begin();
            }
        }
        
        return res;
    }
};