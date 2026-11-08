class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int servers = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<int>rowservers(n,0);
        vector<int>colservers(m,0);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j]==1){
                    rowservers[i]++;
                    colservers[j]++;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j]==1&&(rowservers[i]>1||colservers[j]>1)){
                    servers++;
                }
            }
        }
        return servers;
    }
};