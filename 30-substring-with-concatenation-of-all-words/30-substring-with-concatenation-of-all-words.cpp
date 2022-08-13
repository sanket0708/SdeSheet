class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        int len = words[0].size() , noofwords = words.size();
        vector<int>res;
        map<string,int>wordmap;
        
        if(len*noofwords > s.size())
        {
            return res;
        }
        
        for(string word:words)
        {
            wordmap[word]++;
        }
        
        for(int i=0;i<=s.size()-(noofwords*len);i++)
        {
            map<string,int>wordusemap;
            
            for(int j=i;j<i+(noofwords*len);j+=len)
            {
                string curr = s.substr(j,len);
                if(wordmap.find(curr)==wordmap.end()) //if not found in map
                {
                    break;
                }
                
                wordusemap[curr]++;
                
                if(wordusemap[curr]>wordmap[curr])
                {
                    break;
                }
            }
            
            if(wordusemap==wordmap)
            {
                res.push_back(i);
            }
            
        }
        
        return res;
    }
};