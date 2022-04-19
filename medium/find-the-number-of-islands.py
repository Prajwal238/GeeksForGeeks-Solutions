#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
    void dfs(int i, int j, vector<vector<bool>>& vis, vector<vector<char>>& grid,int n, int m) {
        if(i<0 || j<0 || i>=n || j>=m) return;
        if(grid[i][j] == '0') return;
        
        if(vis[i][j] != true){
            vis[i][j] = true;
            dfs(i+1,j,vis,grid,n,m);
           dfs(i-1,j,vis,grid,n,m);
           dfs(i,j+1,vis,grid,n,m);
           dfs(i,j-1,vis,grid,n,m);
           dfs(i+1,j+1,vis,grid,n,m);
           dfs(i-1,j-1,vis,grid,n,m);
           dfs(i+1,j-1,vis,grid,n,m);
           dfs(i-1,j+1,vis,grid,n,m);
        }
    }

  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] == false and grid[i][j]=='1'){
                    dfs(i,j,vis,grid,n,m);
                    count++;
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends
