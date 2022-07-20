class Solution {
public:
    bool canConstruct(string a, string b) {
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<b.size();i++)
        {
            mp[b[i]]++;
        }
        
        for(int i=0;i<a.size();i++)
        {
            if(mp[a[i]]>0) mp[a[i]]--;
            else return false;
        }
        
        return true;
        
    }
};