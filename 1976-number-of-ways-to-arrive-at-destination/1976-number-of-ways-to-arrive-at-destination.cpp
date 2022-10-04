class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        
        vector<long >ways(n , 0); int mod = 1e9+7; 
        vector<long > dist(n , LONG_MAX);
        vector<pair<long , long >> adj[n];
        for(auto it:roads)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        
        priority_queue<pair<long ,long > , vector<pair<long ,long >> , greater<pair<long ,long > > > pq;
       // vector<long long>dist(n,1e9),ways(n,0);
        dist[0] = 0;
        ways[0] = 1;
        pq.push({0,0});
        //int mod = (int)(1e9+7);
        while(!pq.empty())
        {
            long dis = pq.top().first;
            long node = pq.top().second;
            pq.pop();
            
            for(auto it:adj[node])
            {
                long adjNode = it.first;
                long edW = it.second;
                
                if(dis+edW<dist[adjNode])  //first time coming with this short distance
                {
                    dist[adjNode] = dis+edW;
                    pq.push({dis+edW,adjNode});
                    ways[adjNode] = ways[node];
                }
                else if(dis+edW==dist[adjNode])
                {
                    ways[adjNode] = (ways[adjNode] + ways[node])%mod;
                }
                
            }
        }
        
        return ways[n-1]%mod;
        
    }
};