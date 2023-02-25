//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int MOD=1e9+7;
    int helper(vector<vector<int>>& grid, int i, int j, int n, int m){
        if(i>=n || j>=m || grid[i][j]==0)return 0;
        if(i==n-1 && j==m-1)return 1;
        
        if(grid[i][j]<=0)return abs(grid[i][j]);
        
        grid[i][j] = -(helper(grid,i+1,j,n,m) + helper(grid,i,j+1,n,m))%MOD;
        return abs(grid[i][j]);
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        return helper(grid,0,0,n,m);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends