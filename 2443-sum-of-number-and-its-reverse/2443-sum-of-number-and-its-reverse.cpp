class Solution {
public:
      int reverse(int n)
    {
        int rev = 0;
        while(n>0)
        {
            int rem = n%10;
            rev = rem + 10*rev;
            n /= 10;
        }
        
        //s.insert(rev);
          return rev;
    }
    bool sumOfNumberAndReverse(int num) {
        
        if(num==0) return true;
        for(int i=1;i<num;i++)
        {
            int temp = reverse(i);
            if(i+temp==num)
            {
                return true;
            }
        }
        return false;
    }
};