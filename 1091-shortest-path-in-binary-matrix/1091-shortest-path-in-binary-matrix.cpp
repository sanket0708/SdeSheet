class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
       
        int rows = grid.size();
        int cols = grid[0].size();
        
        if(grid[0][0] || grid[rows-1][cols-1])
        {
            return -1;
        }
        
        vector<vector<int>>visited(rows,vector<int>(cols,0));
        
        queue<pair<int,int>>q;
        q.push({0,0});
        visited[0][0] = 1;
        int ans = 1;
        int dr[] = {-1,-1,0,1,1,1,0,-1};
        int dc[] = {0,1,1,1,0,-1,-1,-1};
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                auto currentNode = q.front();
                int currentX = currentNode.first;
                int currentY = currentNode.second;
                q.pop();
                
                if(currentX==rows-1 && currentY==cols-1)
                {
                    return ans;
                }
                
                for(int i=0;i<8;i++)
                {
                    int newr = currentX + dr[i];
                    int newc = currentY + dc[i];
                    
                    if(newr>=0 && newc>=0 && newr<=rows-1 && newc<=cols-1 && grid[newr][newc]==0 && !visited[newr][newc])
                    {
                        q.push({newr,newc});
                        visited[newr][newc] = 1;
                    }
                }
            }
            
            ans++;
            
        }
       
        return -1;
      
    }
};