class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        int count = 0;
        sort(tasks.begin(),tasks.end());
        unordered_map<int,int>mp;
        
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]]++;
        }
        
        for(auto x:mp)
        {
            if(x.second==1)
            {
                return -1;
            }
            else
            {
                if(x.second==2) count++;
                else if(x.second==3) count++;
                else
                {
                    int temp = x.second;
                    if(temp%3==0) count += temp/3;
                    else count+=(temp/3)+1;
                }
            }
        }
        
        return count;
        
    }
};