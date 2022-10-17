class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char>freq(26,0);
         for(int i=0;i<sentence.size();i++)
         {
            int slot = sentence[i] - 'a';
            freq[slot]++;
         }
        
         for(int i=0;i<freq.size();i++)
         {
             if(freq[i]==0)
             {
                 return false;
             }
         }
            
        return true;
    }
};