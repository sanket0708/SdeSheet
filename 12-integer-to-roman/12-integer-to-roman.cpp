class Solution {
public:
    string intToRoman(int num) {
        
        int numericals[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string romans[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        
        string res;
        
        while(num)
        {
            for(int i=12;i>=0;i--)
            {
                int x = num / numericals[i];
                if(x)
                {
                    while(x--)
                    {
                        res += romans[i];
                    }
                    
                    num %= numericals[i];
                    break;
                }
            }
        }
        
        return res;
        
    }
};