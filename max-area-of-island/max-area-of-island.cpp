class Solution {
public:
    
    int traverse(int i,int j,vector<vector<int>>& grid,int n,int m){
        
        int count=0;
        
        if( i-1>=0 && grid[i-1][j]==1 ){
            grid[i-1][j]=2;
            count++;
            count+=traverse(i-1,j,grid,n,m);
        }
        if(i+1<n && grid[i+1][j]==1 ){
            grid[i+1][j]=2;
            count++;
            count+=traverse(i+1,j,grid,n,m);
        }
        if(j-1>=0 && grid[i][j-1]==1   ){
            grid[i][j-1]=2;
            count++;
            count+=traverse(i,j-1,grid,n,m);
        }
        if(j+1<m  && grid[i][j+1]==1 ){
            grid[i][j+1]=2;
            count++;
            count+=traverse(i,j+1,grid,n,m);
        }
        return count;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0,mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    grid[i][j]=2;
                    cnt=traverse(i,j,grid,n,m);
                    cnt++;
                    mx=max(mx,cnt);
                }
            }
        }
        return mx;
    }
};