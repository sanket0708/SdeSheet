class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
       priority_queue <int, vector<int>, greater<int>> pq;
       int n = arr.size();
        
       for(int i=0;i<n;i++)
       {
           if(pq.size()!=k)
           {
               pq.push(arr[i]);
           }
           else
           {
               if(abs(arr[i]-x)<abs(pq.top()-x))
               {
                   pq.pop();
                   pq.push(arr[i]);
               }
           }
       }
        
        vector<int>ans;
        
        while(!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }
};