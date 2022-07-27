class Solution {
public:
    string digitSum(string s, int k) {
        
        while(s.size()>k)
        {
            string temp = "";
            for(int i=0;i<s.size();i++)
            {
                int sum = 0;
                int count = 0;
                
                while(i<s.size() && count<k)
                {
                    sum += s[i] - '0';
                    i++;
                    count++;
                }
                
                temp += to_string(sum);
                i--;
            }
            
            s = temp;
        }
        
        return s;
        
    }
};