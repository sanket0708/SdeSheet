class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        if(strs.size()==1)
        {
            return {{strs[0]}};
        }
        
        for(int i=0;i<strs.size();i++)
        {
            string str = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(str);
        }
        
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        
        return ans;
        
    }
};