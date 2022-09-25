class Solution {
public:
    
    
    
    
    //you have to check travarse must be bound area
    bool isValid(vector<vector<int>>& grid,int i,int j,int n,int m){
    if((i>=0 and i<n ) and (j>=0 and j<m) and (grid[i][j]==1))
       return true;
      return false;
}

    
    
    //we have store area value thats why & sign use
    void dfs(vector<vector<int>>& grid,int i,int j,int n,int m,int &area){
        
       area++;
 //vistied so 1 to 0
        grid[i][j]=0;
        
        //travarse 4direction
        if(isValid(grid,i+1,j,n,m)){
            dfs(grid,i+1,j,n,m,area);
        }
        if(isValid(grid,i,j+1,n,m)){
            dfs(grid,i,j+1,n,m,area);
        }
        if(isValid(grid,i-1,j,n,m)){
            dfs(grid,i-1,j,n,m,area);
        }
        if(isValid(grid,i,j-1,n,m)){
            dfs(grid,i,j-1,n,m,area);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                
                if(grid[i][j]==1){
               int  area=0;
           
                dfs(grid,i,j,n,m,area);
                    ans=max(area,ans);
                }
            }
        }
     return ans;   
    }
};