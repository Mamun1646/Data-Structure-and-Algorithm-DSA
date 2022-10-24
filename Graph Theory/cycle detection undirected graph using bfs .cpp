#include<unordered_map>
#include<vector>
#include<queue>

bool dfs(int src, vector<int>&visited,int parent,unordered_map<int,vector<int>>&adj_list){
    
    visited[src]=1;



    for(auto neighbour : adj_list[src]){
        if(neighbour!=parent and visited[neighbour])
           return true;
           else dfs(neighbour,visited,src,adj_list);
    }
    
    return false;
    
    
    
    
  }



string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    unordered_map<int,vector<int>>adj_list;
        for(int i=0;i<m;++i){
            int x=edges[i][0];
            int y=edges[i][1];
            adj_list[x].push_back(y);
            adj_list[y].push_back(x);
        }
        vector<int>visited(n+1);
        
         for(int i=1;i<=n; ++i){
            if(!visited[i]){
               bool ans =dfs(i,visited,-1,adj_list);
            if(ans) return "Yes";}
            
            
        }
return "No";}

