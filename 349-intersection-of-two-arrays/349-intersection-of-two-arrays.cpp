class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int>st;
        vector<int>ans;
        int n = nums1.size();
        int m = nums2.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    st.insert(nums1[i]);
                    break;
                }
            }
        }
        
        for(auto itr=st.rbegin();itr!=st.rend();itr++)
            
        {
            ans.push_back(*itr);
        }
        
        return ans;
        
    }
};