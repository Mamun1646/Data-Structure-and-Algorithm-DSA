class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& image,int source_color,int color){
        int row=image.size();
        int col=image[0].size();
        if(i<0 || i>=row)
            return ;
        if(j<0 || j>=col)
            return ;
        if(image[i][j]!=source_color)
            return ;
        image[i][j]=color;
        dfs(i-1,j,image,source_color,color);
           dfs(i+1,j,image,source_color,color);
           dfs(i,j-1,image,source_color,color);
   dfs(i,j+1,image,source_color,color);               
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int source_color=image[sr][sc];
        if(color!=source_color)
            dfs(sr,sc,image,source_color,color);
        return image;
        
    }
};