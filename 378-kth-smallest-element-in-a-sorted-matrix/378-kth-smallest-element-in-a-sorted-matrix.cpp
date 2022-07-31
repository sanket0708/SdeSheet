class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
     
        //<------------------------- BRUTE FORCE---------------------------->
        
       /* int row = matrix.size();
        int col = matrix[0].size();
        vector<int>ans;
       // int count = 0;
        
        for(int i=0;i<row;i++)
        {
           for(int j=0;j<col;j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
         
        sort(ans.begin(),ans.end());
            
        return ans[k-1]; */
        
         //<------------------------- BRUTE FORCE---------------------------->
        
      
        
         int n = matrix.size();
        int low = matrix[0][0];
        int high = matrix[n-1][n-1];
        while(low < high)
        {
            int mid = low + (high - low)/2;
            int count = 0;
            for(int i=0;i<n;i++)
            {
                count += upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            }
            if(count < k)
            {
                low = mid+1;
            }
            else
            {
                high = mid;
            }
        }
        return low;
        
            
    }
};